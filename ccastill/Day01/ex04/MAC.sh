ifconfig | grep "ether" | sed '/media/ d' | cut -d " " -f 2
