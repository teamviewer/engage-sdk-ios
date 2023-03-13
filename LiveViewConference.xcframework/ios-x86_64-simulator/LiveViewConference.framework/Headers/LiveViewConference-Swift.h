#if 0
#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.7.2 effective-4.2 (swiftlang-5.7.2.135.5 clang-1400.0.29.51)
#ifndef LIVEVIEWCONFERENCE_SWIFT_H
#define LIVEVIEWCONFERENCE_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="LiveViewConference",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class NSString;

SWIFT_CLASS("_TtC18LiveViewConference10ActiveUser")
@interface ActiveUser : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull id;
@property (nonatomic, copy) NSString * _Nullable firstname;
@property (nonatomic, copy) NSString * _Nullable lastname;
@property (nonatomic, copy) NSString * _Nullable email;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull tags;
@property (nonatomic, copy) NSString * _Nullable assignedUser;
@property (nonatomic, copy) NSString * _Nullable externalToken;
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * _Nonnull additionalTaggingData;
- (nonnull instancetype)initWithId:(NSString * _Nonnull)id firstname:(NSString * _Nullable)firstname lastname:(NSString * _Nullable)lastname email:(NSString * _Nullable)email tags:(NSArray<NSString *> * _Nonnull)tags assignedUser:(NSString * _Nullable)assignedUser externalToken:(NSString * _Nullable)externalToken additionalTaggingData:(NSDictionary<NSString *, NSString *> * _Nonnull)additionalTaggingData OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class ChatvisorLiveView;
@class ChatvisorCoBrowsing;
@class ChatvisorWebChat;
@class ChatvisorConfiguration;
@class ChatvisorUser;
@class SetupConfiguration;

SWIFT_CLASS("_TtC18LiveViewConference9Chatvisor")
@interface Chatvisor : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ChatvisorLiveView * _Nonnull liveView;)
+ (ChatvisorLiveView * _Nonnull)liveView SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ChatvisorCoBrowsing * _Nonnull coBrowsing;)
+ (ChatvisorCoBrowsing * _Nonnull)coBrowsing SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ChatvisorWebChat * _Nonnull webChat;)
+ (ChatvisorWebChat * _Nonnull)webChat SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ChatvisorConfiguration * _Nonnull configuration;)
+ (ChatvisorConfiguration * _Nonnull)configuration SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ChatvisorUser * _Nonnull user;)
+ (ChatvisorUser * _Nonnull)user SWIFT_WARN_UNUSED_RESULT;
/// Initializes the Chatvisor SDK.
/// \param config SetupConfiguration instance 
///
+ (void)setupWith:(SetupConfiguration * _Nonnull)config;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class ChatvisorConference;

@interface Chatvisor (SWIFT_EXTENSION(LiveViewConference))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ChatvisorConference * _Nonnull conference;)
+ (ChatvisorConference * _Nonnull)conference SWIFT_WARN_UNUSED_RESULT;
@end

@class ChatvisorResult;
@class SharedSession;
enum ChatvisorConnectionState : NSInteger;

SWIFT_CLASS("_TtC18LiveViewConference19ChatvisorCoBrowsing")
@interface ChatvisorCoBrowsing : NSObject
/// Starts a new session
- (void)start;
/// Starts a new session
/// \param result success shareId: String or failure: Error
///
- (void)start:(void (^ _Nonnull)(ChatvisorResult * _Nonnull))result;
/// Joins existing session
/// \param session SharedSession
///
/// \param result success shareId: String or failure: Error
///
- (void)joinWithSession:(SharedSession * _Nonnull)session :(void (^ _Nonnull)(ChatvisorResult * _Nonnull))result;
/// Disconnects the current session
- (void)stop;
/// Registers callback for connection state changes
/// \param callback Called when a session connection state changes
///
- (void)onConnectionStateChangeWithCallback:(void (^ _Nullable)(enum ChatvisorConnectionState))callback;
/// Returns the share Id to identify the session
- (NSString * _Nullable)shareId SWIFT_WARN_UNUSED_RESULT;
/// Enables or disables the default Co-Browsing UI
- (void)setUIEnabled:(BOOL)enabled;
/// Returns a Co-Browsing SharedSession instance if one exists within the App group or nil. SetupConfiguration must be configured with
/// an instance of SetupSharingConfiguration to enable this functionality. Sessions are shared with the App group when Co-Browsing
/// session starts and deleted when session ends by the session initiator app.
- (SharedSession * _Nullable)sharedSession SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class ConferenceProperties;

SWIFT_CLASS("_TtC18LiveViewConference19ChatvisorConference")
@interface ChatvisorConference : NSObject
/// Starts a video conference
/// \param conferenceProperties conference properties with customer id 
///
/// \param showInviteDialog shows invite dialog before starting a conference 
///
- (void)startWithConferenceProperties:(ConferenceProperties * _Nonnull)conferenceProperties showInviteDialog:(BOOL)showInviteDialog;
/// Starts a video conference
/// \param conferenceProperties conference properties with customer id 
///
/// \param showInviteDialog shows invite dialog before starting a conference 
///
/// \param result success: Some or failure: Error
///
- (void)startWithConferenceProperties:(ConferenceProperties * _Nonnull)conferenceProperties showInviteDialog:(BOOL)showInviteDialog :(void (^ _Nonnull)(ChatvisorResult * _Nonnull))result;
/// Joins a video conference
/// \param conferenceProperties conference properties with customer id 
///
- (void)joinWithConferenceProperties:(ConferenceProperties * _Nonnull)conferenceProperties;
/// Joins a video conference
/// \param conferenceProperties conference properties with customer id 
///
/// \param result success: Some or failure: Error
///
- (void)joinWithConferenceProperties:(ConferenceProperties * _Nonnull)conferenceProperties :(void (^ _Nonnull)(ChatvisorResult * _Nonnull))result;
/// Sets a callback for queue status polling. After joining the queue the callback is called every few seconds with the position in the queue.
/// When the position is -1, the conference should be started by calling start(context, properties).
/// \param completion pass completion block 
///
- (void)queueStatusWithCompletion:(void (^ _Nonnull)(NSInteger))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18LiveViewConference22ChatvisorConfiguration")
@interface ChatvisorConfiguration : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
- (void)setCdnServerWithHostname:(NSString * _Nonnull)hostname;
- (void)setServerWithHostname:(NSString * _Nonnull)hostname;
@end

typedef SWIFT_ENUM(NSInteger, ChatvisorConnectionState, open) {
  ChatvisorConnectionStateDisconnected = 0,
  ChatvisorConnectionStateConnecting = 1,
  ChatvisorConnectionStateConnected = 2,
};


SWIFT_CLASS("_TtC18LiveViewConference17ChatvisorLiveView")
@interface ChatvisorLiveView : NSObject
/// Starts a new session
- (void)start;
/// Starts a new session
/// \param result success shareId: String or failure: Error
///
- (void)start:(void (^ _Nonnull)(ChatvisorResult * _Nonnull))result;
/// Joins existing session
/// \param session SharedSession
///
/// \param result success shareId: String or failure: Error
///
- (void)joinWithSession:(SharedSession * _Nonnull)session :(void (^ _Nonnull)(ChatvisorResult * _Nonnull))result;
/// Disconnects the current session
- (void)stop;
/// Tags the current active session with a custom string value
/// \param tag Tag name as string
///
- (void)tag:(NSString * _Nonnull)tag;
/// Tags the current active session with a custom string value
/// \param tag Tag name as string
///
/// \param result success: Some or failure: Error
///
- (void)tag:(NSString * _Nonnull)tag :(void (^ _Nonnull)(ChatvisorResult * _Nonnull))result;
- (void)setChatOverlayEnabledWithIsVisible:(BOOL)isVisible;
/// Registers callback for connection state changes
/// \param callback Called when a session connection state changes
///
- (void)onConnectionStateChangeWithCallback:(void (^ _Nullable)(enum ChatvisorConnectionState))callback;
/// Returns the share Id to identify the session
- (NSString * _Nullable)shareId SWIFT_WARN_UNUSED_RESULT;
/// Returns a Co-Browsing SharedSession instance if one exists within the App group or nil. SetupConfiguration must be configured with
/// an instance of SetupSharingConfiguration to enable this functionality. Sessions are shared with the App group when Co-Browsing
/// session starts and deleted when session ends by the session initiator app.
- (SharedSession * _Nullable)sharedSession SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18LiveViewConference15ChatvisorResult")
@interface ChatvisorResult : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18LiveViewConference13ChatvisorUser")
@interface ChatvisorUser : NSObject
/// Tags the current or any following session with the given user information until clear() is called
/// \param user ActiveUser instance
///
- (void)tag:(ActiveUser * _Nonnull)user;
/// Tags the current or any following session with the given user information until clear() is called
/// \param user ActiveUser instance
///
/// \param result success: Some or failure: Error
///
- (void)tag:(ActiveUser * _Nonnull)user :(void (^ _Nonnull)(ChatvisorResult * _Nonnull))result;
/// Clears a user tag
- (void)clear;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18LiveViewConference16ChatvisorWebChat")
@interface ChatvisorWebChat : NSObject
/// Opens the web chat
- (void)open;
/// Opens the web chat
/// \param result success Some or error
///
- (void)open:(void (^ _Nonnull)(ChatvisorResult * _Nonnull))result;
/// Opens the web chat
- (void)openFor:(NSString * _Nonnull)tenantId;
/// Opens the web chat
/// \param tenandId 
///
/// \param result success Some or error
///
- (void)openFor:(NSString * _Nonnull)tenantId :(void (^ _Nonnull)(ChatvisorResult * _Nonnull))result;
/// Closes  the web chat
- (void)close;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18LiveViewConference20ConferenceProperties")
@interface ConferenceProperties : NSObject
@property (nonatomic, copy) NSString * _Nullable customerId;
@property (nonatomic, copy) NSString * _Nullable firstname;
@property (nonatomic, copy) NSString * _Nullable lastname;
@property (nonatomic, copy) NSString * _Nullable displayName;
@property (nonatomic, copy) NSString * _Nullable email;
@property (nonatomic, copy) NSString * _Nullable phoneNumber;
- (ConferenceProperties * _Nonnull)withActiveUserWithActiveUser:(ActiveUser * _Nullable)activeUser SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class SetupSharingConfiguration;

SWIFT_CLASS("_TtC18LiveViewConference18SetupConfiguration")
@interface SetupConfiguration : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
- (nonnull instancetype)initWithTenantId:(NSString * _Nonnull)tenantId token:(NSString * _Nonnull)token OBJC_DESIGNATED_INITIALIZER;
- (void)setServerUrl:(NSString * _Nonnull)serverUrl;
- (void)setCdnUrl:(NSString * _Nonnull)cdnUrl;
- (void)setSharingConfiguration:(SetupSharingConfiguration * _Nullable)sharingConfig;
@end


SWIFT_CLASS("_TtC18LiveViewConference25SetupSharingConfiguration")
@interface SetupSharingConfiguration : NSObject
/// Initializes the Chatvisor SDK Sharing Configuration.
/// \param appGroupId App group ID eg. “group.[domain].[yourcompany].[yourapp]”. Visit
/// https://developer.apple.com/documentation/xcode/configuring-app-groups for more information.
///
- (nonnull instancetype)initWithAppGroupId:(NSString * _Nonnull)appGroupId OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC18LiveViewConference13SharedSession")
@interface SharedSession : NSObject
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end






#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
