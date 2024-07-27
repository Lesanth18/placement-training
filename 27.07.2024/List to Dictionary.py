def convert(lst):
   res_dict={}
   for i in range(0,len(lst),2):
       res_dict[lst[i]]=lst[i + 1]
   return res_dict

lst=['a',1,'b',2,'c',3]
print(convert(lst))
