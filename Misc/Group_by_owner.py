class FileOwners:

    @staticmethod
    
    def group_by_owners(files):
        result = {}
        for file, owner in files.items(): #use files.iter items on py2.x
            result[owner] = result.get(owner,[])+ [file]
        return result

files = {
    'Input.txt': 'Randy',
    'Code.py': 'Stan',
    'Output.txt': 'Randy'
}


print(FileOwners.group_by_owners(files))