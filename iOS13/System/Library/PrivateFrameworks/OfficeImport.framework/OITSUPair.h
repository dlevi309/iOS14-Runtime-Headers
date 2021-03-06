/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface OITSUPair : NSObject <NSCopying, NSMutableCopying, NSCoding> {

	id mFirst;
	id mSecond;

}

@property (nonatomic,readonly) id first; 
@property (nonatomic,readonly) id second; 
+(id)pair;
+(id)pairWithFirst:(id)arg1 second:(id)arg2 ;
+(id)pairWithPair:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)second;
-(id)first;
-(id)initWithFirst:(id)arg1 second:(id)arg2 ;
-(id)initWithPair:(id)arg1 ;
-(void)p_SetFirst:(id)arg1 ;
-(void)p_SetSecond:(id)arg1 ;
@end

