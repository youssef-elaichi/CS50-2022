import csv
get_data = input("language: ").lower().strip()
counts = 0 


with open('/var/home/johan/Documents/Programing/CS50 2022/week7/favorites.csv', 'r') as file:
    reader = csv.DictReader(file)
    for row in reader:
        lang = row['language'].lower().strip()

        if get_data == lang:
            counts += 1


    print(counts)