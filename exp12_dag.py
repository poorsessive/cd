three_addr_gram={
    'x':['a','+','b'],
    'y':['x','-','c'],
    'z':['x','*','y']
}

operator=['+','-','*','/','^']

dag_gram={}

def generateDAG(three_addr_gram):
    for i in three_addr_gram.keys():
        #print(i)
        for j in range(0,len(three_addr_gram[i])-1):
            #print(three_addr_gram[i][j])
            if three_addr_gram[i][j] in operator:
                temp=[]
                temp.append(three_addr_gram[i][j-1])
                temp.append(three_addr_gram[i][j+1])
                dag_gram[three_addr_gram[i][j]] = temp

print("The given 3 address code:")
for i in three_addr_gram.keys():
    print(f"{i} = {''.join(three_addr_gram[i])}")

generateDAG(three_addr_gram)
print("The corresponding DAG represented in table format is...")
print("Operator | Child1 | Child2")
for i in dag_gram.keys():
    print(f"{i} | {' | '.join(dag_gram[i])}")