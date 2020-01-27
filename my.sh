cat qyou.log| grep FAILED | rev | cut -d " " -f 1 |rev > /home/amagi/Desktop/failure_status.txt
cat qyou.log| grep url: |cut -d " " -f 10-11 > /home/amagi/Desktop/failure_url.txt
cat failure_url.txt| cut -d "?" -f 2| cut -d "&" -f 1-3 --output-delimiter=' '> /home/amagi/Desktop/failure_parameters.txt

