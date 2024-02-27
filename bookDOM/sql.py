import sqlite3

conn = sqlite3.connect('users.db')
c = conn.cursor()

# Create table
c.execute('''CREATE TABLE users
             (id INTEGER PRIMARY KEY AUTOINCREMENT, 
             username TEXT NOT NULL, 
             password TEXT NOT NULL)''')

# Save (commit) the changes
conn.commit()

# Close the connection
conn.close()
