/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HMFHTTPClientConfiguration : HMFObject <NSCopying> {

	BOOL _requiresEncryption;
	BOOL _allowsAnonymousConnection;
	BOOL _allowsCellularAccess;
	BOOL _supportsWakeOnLAN;
	BOOL _monitorsReachability;

}

@property (assign) BOOL requiresEncryption;                     //@synthesize requiresEncryption=_requiresEncryption - In the implementation block
@property (assign) BOOL allowsAnonymousConnection;              //@synthesize allowsAnonymousConnection=_allowsAnonymousConnection - In the implementation block
@property (assign) BOOL allowsCellularAccess;                   //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (assign) BOOL supportsWakeOnLAN;                      //@synthesize supportsWakeOnLAN=_supportsWakeOnLAN - In the implementation block
@property (assign) BOOL monitorsReachability;                   //@synthesize monitorsReachability=_monitorsReachability - In the implementation block
+(id)defaultConfiguration;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(BOOL)allowsCellularAccess;
-(BOOL)requiresEncryption;
-(BOOL)allowsAnonymousConnection;
-(BOOL)supportsWakeOnLAN;
-(BOOL)monitorsReachability;
-(void)setRequiresEncryption:(BOOL)arg1 ;
-(void)setAllowsAnonymousConnection:(BOOL)arg1 ;
-(void)setSupportsWakeOnLAN:(BOOL)arg1 ;
-(void)setMonitorsReachability:(BOOL)arg1 ;
@end

