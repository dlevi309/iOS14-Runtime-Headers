/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray;

@interface SKThreadSafeMapTable : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration> {

	opaque_pthread_mutex_t _storageLock;
	NSMutableArray* _storage;

}
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithNSMapTable:(id)arg1 ;
@end

