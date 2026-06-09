import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/student/Git-projects/eye_in_hand_A5/install/robotiq_app'
