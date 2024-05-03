# import stack*


top=-1
max=10
stack=[]

def push():
     global top
     # global max
     # global stack
     
     elem=int(input("Enter VALUE TO INPUT : "))
     
     if top==max-1:
          print("STACK IS OVERFLOW")

     else:
          top=0
          stack[top]=elem
          top=top+1 
          
def pop():
     global top
     # global max
     # global stack
     
     if top==-1:
          print("STACK IS UNDERFLOW ")
     
     else:
          top=top-1

def display():
     global top
     # global max
     # global stack
     
     print(stack[0:11])

push()
push()