####################16
import pandas as pd
one=pd.DataFrame({'Name':['teju','gouri'],
'age':[19,20]},
index=[1,2])
two=pd.DataFrame({'Name':['suma','nammu'],
'age':[20,21]},
index=[3,4])
print(pd.concat([one,two]))

##########################17
import pandas as pd
pd.set_option('display.max_rows', 50)
pd.set_option('display.max_columns', 50)
diamonds=pd.read_csv(r'https://raw.githubusercontent.com/datasciencedojo/datasets/master/titanic.csv')
print("First 5 rows:")
print(diamonds.head())
print(" Last 5 lines:")
print(diamonds.tail())

###################################19c
import numpy as np
np.random.seed(100)
arr = np.random.randint(1,11,size=(6, 10))
print(arr)

def counts_of_all_values_rowwise(arr2d):
    # Unique values and its counts row wise
    num_counts_array = [np.unique(row, return_counts=True) for row in arr2d]
    # Counts of all values row wise
    return([[int(b[a==i]) if i in a else 0 for i in np.unique(arr2d)] for a, b in num_counts_array])   
print(np.arange(1,11))
counts_of_all_values_rowwise(arr)
######################################20a
import pandas as pd
nums = {'amount': [10, 250, 3000, 40000, 500000]}
print("Original dataframe:")
df = pd.DataFrame(nums)
print(df)
print("\nAdd leading zeros:")
df['amount'] = df['amount'].apply(lambda x: '{0:0>8}'.format(x))
print(df)
#########################################20b
import pandas as pd
df = pd.DataFrame({
    'company_code': ['Abcd','EFGF', 'skfsalf', 'sdfslew', 'safsdf'],
    'date_of_sale ': ['12/05/2002','16/02/1999','25/09/1998','12/02/2022','15/09/1997'],
    'sale_amount': [12348.5, 233331.2, 22.5, 2566552.0, 23.0]})
print("Original DataFrame:")
print(df)
print("\nLength of the string in a column:")
df['company_code_length'] = df['company_code'].apply(len)
print(df)
############################25
import pandas as pd
import numpy as np
exam_data  = {'name': ['Anastasia', 'Dima', 'Katherine', 'James', 'Emily', 'Michael', 'Matthew', 'Laura', 'Kevin', 'Jonas'],
        'score': [12.5, 9, 16.5, np.nan, 9,20,14.5,np.nan,8,19],
        'attempts': [1, 3, 2, 3, 2, 3, 1, 1, 2, 1],
        'qualify': ['yes', 'no', 'yes', 'no', 'no', 'yes', 'yes', 'no', 'no', 'yes']}
labels = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j']
df = pd.DataFrame(exam_data , index=labels)
print(df)
###########################26
import pandas as pd
import numpy as np
exam_data  = {'name': ['Anastasia', 'Dima', 'Katherine', 'James', 'Emily', 'Michael', 'Matthew', 'Laura', 'Kevin', 'Jonas'],
        'score': [12.5, 9, 16.5, np.nan,9, 20,14.5,np.nan,8,19],
        'attempts': [1, 3, 2, 3, 2, 3, 1, 1, 2, 1],
        'qualify': ['yes', 'no', 'yes', 'no', 'no', 'yes', 'yes', 'no', 'no', 'yes']}
labels = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j']
df = pd.DataFrame(exam_data , index=labels)
print("Select specific columns and rows:")
print(df.iloc[[1, 3, 5, 6], [1, 3]])
##############################28
import pandas as pd
import numpy as np
d = {'col1': [1, 4, 3, 4, 5], 'col2': [4, 5, 6, 7, 8], 'col3': [7, 8, 9, 0, 1]}
df = pd.DataFrame(d)
print("Original DataFrame")
print(df)
print("New DataFrame after removing 2nd & 4th rows:")
df = df.drop(df.index[[2,4]])
print(df)

