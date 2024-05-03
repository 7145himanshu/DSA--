# next #type: ignore
class node:
     def __init__(self,prev=None,item=None,next=None):
          self.prev=prev
          self.item=item
          self.next=next
          
class SLL:
     def __init__(self, start=None):
          self.start=start
          
     def is_empty(self):
          if self.start==None:
               print("empty list...!")
               
     def insert_front(self,data):
          n=node(None,data,None)
          n.next=self.start
          self.start=data
          print("executed..**")
          
          
     def insert_last(self,data):
          n=node(None,data,None)
          
          temp=self.start
          while temp.next !=None: 
               temp=temp.next      
               
          n.prev=temp
          temp.next=n
          print("executed..**")
          
     def insert_after(self,data,value):
          n=node(None,data,None)
          
          temp=self.start
          while temp.next!=None:
               if temp.item==value:
                    n.prev=temp
                    n.next=temp.next
                    temp.next=n
                    print("executed..**")
                    break
               temp=temp.next
          if temp.next==None and temp.item==value:
               n.prev=temp
               n.next=temp.next
               temp.next=n
               print("executed..**")
          else:
               print("value not found!!!")
               
               
     def insert_before(self,data,value):
          n=node(None,data,None)
          temp=self.start
          while temp.next!=None or temp.next==None:
               if temp.item==value:
                    n.prev=temp.prev
                    temp.prev=n
                    n.next=temp
                    print("executed..**")
                    break
               temp=temp.next
               
     def search(self,value):
          temp=self.start
          while temp.next!=None or temp.next==None:
               if temp.item==value:
                    print("Element found-",temp.item)
               else:
                    print("Not found!!!")
               
               temp=temp.next
               
     def display(self):
          if self.start==None:
               print("List is empty!!!")
          else:
               temp=self.start
               while temp.next==None or temp.next!=None: 
                    print(temp.item)
                    
                    temp=temp.next
                    
     
     
     
dl1=SLL()

dl1.insert_front(2)
dl1.insert_front(1)





dl1.display()