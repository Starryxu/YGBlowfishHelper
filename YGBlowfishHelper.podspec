Pod::Spec.new do |s|
s.name         = "YGBlowfishHelper"
s.version      = "1.0.0"
s.summary      = "针对NSString和NSData的加密解密分类"
s.homepage     = "https://github.com/Starryxu/YGBlowfishHelper.git"
s.license      = { :type => "MIT", :file => "LICENSE" }
s.author       = { "xuyaguang" => "xu_yaguang@163.com" }
s.platform     = :ios, "8.0"
s.source       = { :git => "https://github.com/Starryxu/YGBlowfishHelper.git", :tag => s.version.to_s }
s.source_files  = "YGBlowfishHelper/YGBlowfishHelper/*.{h,m}"
s.requires_arc = true
end
