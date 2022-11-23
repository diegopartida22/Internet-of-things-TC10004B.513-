import os
os.environ["GOOGLE_APPLICATION_CREDENTIALS"]="firebase.json"

import firebase_admin
from firebase_admin import credentials
from firebase_admin import firestore

# Log In
cred = credentials.Certificate('firebase.json')
app = firebase_admin.initialize_app()
db = firestore.client()

sensor_1_ref = db.collection(u'Sensor_1')
docs = sensor_1_ref.stream()

for doc in docs:
    print(f'{doc.id} => {doc.to_dict()}')