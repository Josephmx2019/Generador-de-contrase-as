def password_generator(num)
    chars = "abcdefghijklmnñopqrstuvwxyzABCDEFGHIJKMNÑOPQRSTUVWXYZ!#$%&/()='?¡¿\\+*~}]`{[^<>-_.:,;|°¬"
    password = ''
    
    num.times do
        password += chars[rand(chars.length)]
    end
    
    return password
end

opc = 'Y'
while opc != 'N' && opc != 'n'
    print "Write the num of characters: "
    num = gets.chomp.to_i
    generated_password = password_generator(num)
    puts "Your password is: #{generated_password}"
    print "Continue? Y/N "
    opc = gets.chomp
end

puts "Presiona una tecla para continuar..."