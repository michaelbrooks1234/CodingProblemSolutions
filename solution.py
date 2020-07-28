def to_jaden_case(string):
    join = " "
    thing = []
    string = string.split(" ")
    for word in string:
        thing.append(word.capitalize())
    thing = join.join(thing)
    return thing
