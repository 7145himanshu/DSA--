# next #type: ignore
class node:
     def __init__(self,item=None,next=None):
          self.item=item
          self.next=next
          
class sll:
     def __init__(self,start=None):
          self.start=start
          
     def empty(self):
          if self.start==None:
               print("List is Empty..!!")
               return True
          else:
               pass
               # print("contain data..")
               
     def insert_front(self,data):
          n=node(data,self.start)
          self.start=n
          print("executed")
          
     def insert_last(self,data):
          n=node(data)
          if self.start==None:
               self.start=n
          else:
               temp=self.start
               while temp.next != None: 
                    temp=temp.next      
               
               temp.next=n
          print("executed")
               
     def search(self,value):
          if self.empty()==True:
               print("list is emptyy..!")
          else:
               temp=self.start
               while temp.next != None:
                    temp=temp.next
               
                    if temp.item==value :
                         print("Element found=",temp.item)
                         return True
          # else:
               if temp.item!=value:
                    print("ELement not found")



l1=sll()
l1.insert_front(1)

l1.insert_front(5)
l1.insert_last(2)
l1.insert_last(3)
l1.insert_last(4)

l1.search(6)
l1.search(4)
l1.search(3)