import unittest
import vectorlib

class TestVectorFunctions(unittest.TestCase):
    def test_add(self):
        result = vectorlib.add(1, 2, 3, 4, 5, 6)
        self.assertEqual(result, (5, 7, 9))
    
    def test_subtract(self):
        result = vectorlib.subtract(5, 5, 5, 3, 2, 1)
        self.assertEqual(result, (2, 3, 4))
    
    def test_dot_product(self):
        result = vectorlib.dot_product(1, 2, 3, 4, 5, 6)
        self.assertEqual(result, 32)

class TestVector3D(unittest.TestCase):
    def test_length(self):
        vec = vectorlib.Vector3D(3, 4, 0)
        self.assertAlmostEqual(vec.length(), 5.0)
    
    def test_normalize(self):
        vec = vectorlib.Vector3D(3, 0, 0)
        normalized = vec.normalize()
        self.assertAlmostEqual(normalized.x, 1.0)
        self.assertAlmostEqual(normalized.y, 0.0)
        self.assertAlmostEqual(normalized.z, 0.0)

if __name__ == '__main__':
    unittest.main()