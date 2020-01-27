cat sidekiq.log| grep RuntimeError\: |cut -d " " -f 6-7|sort -k2n -u
