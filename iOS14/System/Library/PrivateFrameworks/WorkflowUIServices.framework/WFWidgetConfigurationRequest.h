/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUIServices.framework/WorkflowUIServices
*/

#import <WorkflowUIServices/WorkflowUIServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIColor, INIntent, NSString, NSSecurityScopedURLWrapper, INSchema;

@interface WFWidgetConfigurationRequest : NSObject <NSSecureCoding> {

	BOOL _usesWidgetAccentColor;
	UIColor* _widgetTintColor;
	INIntent* _intent;
	unsigned long long _sizeClass;
	NSString* _widgetDisplayName;
	NSString* _widgetDescription;
	UIColor* _widgetPrimaryColor;
	NSString* _bundleIdentifier;
	NSSecurityScopedURLWrapper* _schemaBundleURL;
	NSSecurityScopedURLWrapper* _widgetBundleScopedURL;
	CGSize _defaultCardSize;
	CGRect _initialCardFrame;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                                                             //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSSecurityScopedURLWrapper * schemaBundleURL;                                            //@synthesize schemaBundleURL=_schemaBundleURL - In the implementation block
@property (nonatomic,readonly) NSSecurityScopedURLWrapper * widgetBundleScopedURL;                                           //@synthesize widgetBundleScopedURL=_widgetBundleScopedURL - In the implementation block
@property (nonatomic,readonly) INIntent * intent;                                                                            //@synthesize intent=_intent - In the implementation block
@property (nonatomic,readonly) unsigned long long sizeClass;                                                                 //@synthesize sizeClass=_sizeClass - In the implementation block
@property (nonatomic,readonly) CGSize defaultCardSize;                                                                       //@synthesize defaultCardSize=_defaultCardSize - In the implementation block
@property (nonatomic,readonly) CGRect initialCardFrame;                                                                      //@synthesize initialCardFrame=_initialCardFrame - In the implementation block
@property (nonatomic,copy,readonly) NSString * widgetDisplayName;                                                            //@synthesize widgetDisplayName=_widgetDisplayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * widgetDescription;                                                            //@synthesize widgetDescription=_widgetDescription - In the implementation block
@property (nonatomic,readonly) INSchema * schema; 
@property (getter=isWidgetExtensionInformationLoaded,nonatomic,readonly) BOOL widgetExtensionInformationLoaded; 
@property (nonatomic,readonly) UIColor * widgetPrimaryColor;                                                                 //@synthesize widgetPrimaryColor=_widgetPrimaryColor - In the implementation block
@property (nonatomic,readonly) UIColor * widgetTintColor;                                                                    //@synthesize widgetTintColor=_widgetTintColor - In the implementation block
@property (nonatomic,readonly) BOOL usesWidgetAccentColor;                                                                   //@synthesize usesWidgetAccentColor=_usesWidgetAccentColor - In the implementation block
+(BOOL)supportsSecureCoding;
-(INIntent *)intent;
-(INSchema *)schema;
-(id)initWithOptions:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)appBundleIdentifier;
-(unsigned long long)sizeClass;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithIntent:(id)arg1 bundleIdentifier:(id)arg2 widgetBundleScopedURL:(id)arg3 schemaBundleURL:(id)arg4 sizeClass:(unsigned long long)arg5 defaultCardSize:(CGSize)arg6 initialCardFrame:(CGRect)arg7 widgetDisplayName:(id)arg8 widgetDescription:(id)arg9 usesWidgetAccentColor:(BOOL)arg10 ;
-(id)initWithIntent:(id)arg1 bundleIdentifier:(id)arg2 widgetBundleScopedURL:(id)arg3 schemaBundleURL:(id)arg4 sizeClass:(unsigned long long)arg5 defaultCardSize:(CGSize)arg6 initialCardFrame:(CGRect)arg7 widgetDisplayName:(id)arg8 widgetDescription:(id)arg9 widgetPrimaryColor:(id)arg10 widgetTintColor:(id)arg11 usesWidgetAccentColor:(BOOL)arg12 ;
-(UIColor *)widgetTintColor;
-(BOOL)isWidgetExtensionInformationLoaded;
-(void)loadWidgetExtensionInformationWithCompletion:(/*^block*/id)arg1 ;
-(void)startAccessingSecurityScopedBundleResource;
-(CGSize)defaultCardSize;
-(CGRect)initialCardFrame;
-(NSString *)widgetDisplayName;
-(NSString *)widgetDescription;
-(UIColor *)widgetPrimaryColor;
-(BOOL)usesWidgetAccentColor;
-(NSSecurityScopedURLWrapper *)schemaBundleURL;
-(NSSecurityScopedURLWrapper *)widgetBundleScopedURL;
@end

