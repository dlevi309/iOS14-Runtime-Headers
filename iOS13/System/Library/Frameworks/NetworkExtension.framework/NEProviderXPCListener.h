/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <Foundation/NSXPCListener.h>

@class NSString;

@interface NEProviderXPCListener : NSXPCListener {

	NSString* _extensionContextClassName;

}

@property (nonatomic,readonly) NSString * extensionContextClassName;              //@synthesize extensionContextClassName=_extensionContextClassName - In the implementation block
-(id)initWithExtensionContextClassName:(id)arg1 ;
-(NSString *)extensionContextClassName;
@end
