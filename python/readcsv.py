with open('aa._csv',mode='r') as f:
    file=_csv.reader(f)
    for lines in file:
        if lines:print(lines[0],'\t',lines[1],'\t',lines[2])
