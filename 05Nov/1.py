#Connect a graph to a node using a dictionary and when users enter a node
#it should display the key value of the nodes it is connected to

Node = {'A':['B','C'],'B':['A','C'],'C':['A','D','E'],'D':['E','C'],'E':['C','D']}

def checkNode(Nodes):
    node1 = str(input("Enter node 1:"))
    node2 = str(input("Enter node 2:"))
    if node1 and node2 in 'ABCDE':
        if node2 in Nodes[node1]:
            print(f"{node1} is connected to {node2}")
        else:
            print(f"{node1} is not connected to {node2}")
    else:
        print("Node not found")

def addNode(Nodes):
    node1 = str(input("Enter a node to add:"))
    connected = list(input("Enter the node to which the given node is connected:"))
    print(f"The set of nodes before adding:{Nodes}")
    Nodes[node1]=connected
    print(f"The set of nodes after adding:{Nodes}")



checkNode(Node)
addNode(Node)
