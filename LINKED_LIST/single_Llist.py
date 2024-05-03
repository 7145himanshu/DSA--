#single Linked list
# next #type: ignore
class node:
     def __init__ (self,item=None ,next=None ): 
          self.item=item
          self.next=next

class sll:
     def __init__(self, start=None): #type: ignore
          self.start=start

     def is_empty(self):                               #empty check
          if self.start==None:
               print("Linked List is empty...!!")
               return True
          else:
               print("LINKED LIST CONTAIN ELEMENT...!!")

     def insert_front(self,data):                      #insertion front 
          n=node(data,self.start)
          self.start=n
          print("Element inserted succesfully....!")

     def insert_last(self,data):                        #insertion last
          n=node(data)
          
          if self.start==None:
               self.start=n
          else:
               temp=self.start
               while temp.next != None: 
                    temp=temp.next  
                    
               temp.next=n
               print("Element inserted succesfully....!")

                    
     def insert_after(self,xnode,data):                # insert after
          n=node(data,self.start)
          if self.start==None:
               print("List is empty")
          
          else:
               temp=self.start
               while temp.next != None:
                    # print(temp.item)
                    if temp.item==xnode:
                         n.next=temp.next
                         temp.next=n
                         print("executed")
                    temp=temp.next
               if temp.next != None:             
                    print("ELement not found")          
               
          
          
     def search(self,value):                               #search 
          temp=self.start
          # hemp=self.start
          if temp.next==None:
               if temp.item==value:
                    print("Element found =",temp.item)
               
          while temp.next != None:
               # hemp=hemp.next     
               if temp.item==value:
                    print("Element found =",temp.item)
                    break
               temp=temp.next 
               # else:
                    # print("Element not found in Linked List...!!")

     def display(self):                                   #display
          if self.start==None:
               print("List is empty")
          else:
               temp=self.start
               while temp.next != None:
                    print(temp.item)
                    temp=temp.next
               print(temp.item)

          
     def delete_front(self):
          if self.start==None:
               print("LL is empt.**")
          else:
               self.start=self.start.next
               print("deleted****")
          
     def delete_last(self):
          if self.start==None:
               print("List is empt***")
          elif self.start.next==None:
               self.start=None
          else:
               temp=self.start
               while temp.next.next !=None:
                    temp=temp.next
                    
               temp.next=None
               
     def delete_this(self,data):
          if self.start==None:
               print("List is empt***")
               
          else:
               temp=self.start
               if temp.item==data:
                    self.start=temp.next
                    print("[",temp.item,"]","-deleted")     
               else:
                    # print("**",temp.next)
                    while temp.next!=None:
                         # print("--",temp.next)
                         if temp.next.item==data:
                              temp.next=temp.next.next
                              print("[",data,"]","-deleted")
                              break
                         temp=temp.next
                    print("ELement not found..!!")


               # MAKE LINKED LIST ITERABLE******************************** 

     def _iter_(self):
          return sll_iterable(self.start)

class sll_iterable:
     def __init__(self,start):
          self.current=start
          
     def _iter_(self):
          return self

     def _next_(self):
          if not self.current:
               raise StopIteration
          data=self.current.item
          self.current=self.current.next
          return data          





