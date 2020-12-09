#!/usr/bin/python3
"""lockboxes holberton interview"""


def canUnlockAll(boxes):
    """function canUnlockAll
      variable: boxes
      Return Bool"""
    lb = len(boxes)
    rng = [*range(lb)]
    uniq = []
    new = [0]
    for i in range(lb - 1):
        for y in range(len(boxes[new[i]])):
            new.append(boxes[new[i]][y])
    new = sorted(new)
    for i in new:
        if i not in uniq:
            uniq.append(i)
    if (uniq == rng):
        return(True)
    else:
        return(False)
