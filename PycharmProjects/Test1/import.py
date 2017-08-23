from Demo import spy_age, spy_name, spy_salutation
question = "Do you want to contniue as %s%s ? (Y/N)" % (spy_salutation, spy_name)
existing = raw_input(question)
print question