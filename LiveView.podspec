Pod::Spec.new do |s|
    s.name         = "LiveView"
    s.version      = "1.0.0"
    s.summary      = "CoBrowsing framework"
    s.description  = <<-DESC
    CoBrowsing framework
    DESC
    s.homepage     = "http://chatvisor.com"
    s.license = { :type => 'Copyright', :text => <<-LICENSE
                   Copyright 2019 Chatvisor
                   LICENSE
                }
    s.author             = { "Chatvisor" => "office@chatvisor.com" }
    s.public_header_files = "LiveView.framework/Headers/*.h"
    s.source = { :path => "." }
    s.source_files = "LiveView.framework/Headers/*.h"
    s.vendored_frameworks = "LiveView.framework"
    s.platform = :ios
    s.swift_version = "5.0"
    s.ios.deployment_target  = '10.0'
    s.dependency "Dip", "~> 7.0"
    s.dependency "Starscream", "~> 3.1"
    s.dependency "SwiftProtobuf", "~> 1.6"
end

