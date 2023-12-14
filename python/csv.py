import csv
fields=['Name','Department','Birthday Month']
rows=[['Archana','MCA','November'],['Aparna','MCA','MAY']]
with open('ab.csv','w') as f:
    csvwriter=csv.writer(f)
    csvwriter.writerow(fields)
    csvwriter.writerows(rows)
    f.close()
