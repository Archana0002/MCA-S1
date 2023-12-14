import _csv
fields=['Name','Department','Birthday_Month']
rows=[['Archana','MCA','November'],['Aparna','MCA','MAY'],['Ajay','MCA','March']]
with open('aa.csv','w') as f:
    writer = _csv.writer(f)
    writer.writerow(fields)
    writer.writerows(rows)
    f.close()
