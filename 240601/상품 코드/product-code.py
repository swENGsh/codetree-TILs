class Info:
    def __init__(self, product="codetree", pdesc=50):
        self.product = product
        self.pdesc = pdesc

product, pdesc = input().split()
info1 = Info()
info2 = Info(product, pdesc)
print(f'product {info1.pdesc} is {info1.product}')
print(f'product {info2.pdesc} is {info2.product}')