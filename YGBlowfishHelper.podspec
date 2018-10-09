
Pod::Spec.new do |spec|

  spec.name         = "YGBlowfishHelper"
  spec.version      = "0.0.1"
  spec.summary      = "针对NSString和NSData的加密解密分类"
  spec.homepage     = "https://github.com/Starryxu/YGBlowfishHelper"
  spec.license      = { :type => "MIT", :file => "FILE_LICENSE" }
  spec.author       = { "许亚光" => "xu_yaguang@163.com" }
  spec.platform     = :ios, "8.0"
  spec.source       = { :git => "https://github.com/Starryxu/YGBlowfishHelper", :tag => s.version.to_s }
  spec.source_files  = "YGBlowfishHelper/YGBlowfishHelper/*.{h,m}"
  spec.requires_arc = true

end
