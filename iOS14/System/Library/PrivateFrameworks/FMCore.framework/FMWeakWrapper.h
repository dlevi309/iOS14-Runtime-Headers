/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
*/

#import <FMCore/FMCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FMWeakWrapper : NSObject <NSCopying> {

	id _object;
	unsigned long long _objectHash;

}

@property (assign,nonatomic,__weak) id object;                           //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) unsigned long long objectHash;              //@synthesize objectHash=_objectHash - In the implementation block
-(id)initWithObject:(id)arg1 ;
-(id)init;
-(void)setObjectHash:(unsigned long long)arg1 ;
-(unsigned long long)objectHash;
-(id)object;
-(void)setObject:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

