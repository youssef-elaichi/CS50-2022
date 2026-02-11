
scores = []
for i in range(5):
    score = int(input("Enter score "))
    scores.append(score)

print(f"Scores: {sum(scores)/ len(scores)}")