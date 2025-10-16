// solveing
import numpy as np

arr = np.arange(10)
print(arr)

// --------------------------------------------

import numpy as np
arr = np.random.randint(1, 21, size=(3, 3))
print(arr)

// --------------------------------------------

import numpy as np

my_list = [1, 2, 3, 4, 5]
arr = np.array(my_list)
print(arr)

// --------------------------------------------

import numpy as np

arr = np.array([[1, 2, 3], [4, 5, 6]])

print(arr.ndim)
print(arr.shape)
print(arr.dtype)

// --------------------------------------------

import numpy as np

arr = np.arange(1, 17).reshape(4, 4)
print(arr[:2, :2])

// --------------------------------------------

import numpy as np

a = np.array([1, 2, 3])
b = np.array([4, 5, 6])

print(a + b)
print(a * b)

// --------------------------------------------

import numpy as np

arr = np.arange(10, 20)
print(arr[::-1])

// --------------------------------------------

import numpy as np

arr = np.arange(10, 20)
print(arr[arr > 15])

// --------------------------------------------

import numpy as np

arr = np.arange(10, 20)
print(arr.mean())
print(arr.min())
print(arr.max())

// --------------------------------------------

import numpy as np

a = np.random.randint(1, 11, size=(5, 5))
b = np.random.randint(1, 11, size=(5, 5))
c = np.minimum(a, b)

print(a)
print(b)
print(c)
