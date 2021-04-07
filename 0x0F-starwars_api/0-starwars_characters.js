#!/usr/bin/node
const request = require('request');
const process = require('process');
const mid = process.argv[2];
var name = []
const options = { url: 'https://swapi-api.hbtn.io/api/films/' + mid };
request.get(options, function (err0, res, body) {
  const jsonbdy = JSON.parse(body);
  const chr = jsonbdy.characters;
  for (let i = 0; i < chr.length; i++) {
    var n = chr[i];
    request.get({url : n}, function(err1, res1, body1){
    var jb = JSON.parse(body1)
    console.log(jb.name)})
}
});
