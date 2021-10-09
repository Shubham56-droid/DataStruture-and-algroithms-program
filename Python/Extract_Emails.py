import re

str = """
foo bar
ok ideler.dennis@gmail.com sup
hey...user+123@example.com , wyd
hello world!
"""
email = re.findall(r'\w+@\S+\w' , str)

print(email)
