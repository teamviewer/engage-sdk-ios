Pod::Spec.new do |s|
    s.name         = "Chatvisor-LiveView"
    s.version      = "1.0.15"
    s.summary      = "Chatvisor CoBrowsing framework"
    s.description  = <<-DESC
    Framework for using Chatvisor CoBrowsing with iOS
    DESC
    s.homepage     = "http://chatvisor.com"
    s.license = { 
      :type => 'Copyright', 
      :text => <<-LICENSE
      Copyright Chatvisor
      LICENSE
    }
    s.author             = { "Chatvisor" => "office@chatvisor.com" }
    s.public_header_files = "LiveView.xcframework/*/LiveView.framework/Headers/*.h"
    s.source = { :git => "https://gitlab.com/chatvisor/ios-release.git", :tag => "1.0.15" }
    s.source_files = "LiveView.xcframework/*/LiveView.framework/Headers/*.h"
    s.vendored_frameworks = "LiveView.xcframework"
    s.platform = :ios
    s.swift_version = "5.0"
    s.ios.deployment_target  = '10.0'
    s.dependency "Dip", "~> 7.0"
    s.dependency "Starscream", "~> 3.1"
    s.dependency "SwiftProtobuf", "~> 1.6"
end

