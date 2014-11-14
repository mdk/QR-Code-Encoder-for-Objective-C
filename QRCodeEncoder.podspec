Pod::Spec.new do |s|
  s.name         = 'QRCodeEncoder'
  s.version      = '1.0'
  s.summary      = 'QRCode generation for iOS'
  s.author = {
    'Ming Yang' => 'myang.git@gmail.com'
  }
  s.requires_arc = false
  s.source = {
    :git => 'https://github.com/myang-git/QR-Code-Encoder-for-Objective-C.git'
  }
  s.source_files = 'QRCodeEncoderObjectiveCAtGithub/*.{h,m,mm,cpp}'
end

