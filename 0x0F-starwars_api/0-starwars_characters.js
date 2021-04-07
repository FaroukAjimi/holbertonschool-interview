#!/usr/bin/node
const request = require('request');
const process = require('process');
const mid = process.argv[2];
let i = 0;
let y = 0;
const options = { url: 'https://swapi-api.hbtn.io/api/films' };
request.get(options, function (err0, res, body) {
  const jsonbdy = JSON.parse(body);
  const f = jsonbdy.results;
  for (i = 0; i < f.length; i++) {
    for (const [key, value] of Object.entries(f[i])) {
      if (key === 'episode_id' && value === parseInt(mid)) {
        const chr = f[i].characters;
        for (y = 0; y < chr.length; y++) {
          request.get({ url: chr[y] }, function (err1, res1, body1) {
            const jsb = JSON.parse(body1);
            console.log(jsb.name);
          });
        }
      }
    }
  }
});
