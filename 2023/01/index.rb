fs = File.open("./message_01.txt").read.downcase.strip.split(" ")
fs.group_by(&:itself).transform_values(&:count).each do |k, v|
    print "#{k}#{v}"
end
puts ''