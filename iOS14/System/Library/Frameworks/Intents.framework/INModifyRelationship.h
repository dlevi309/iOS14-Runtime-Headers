/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface INModifyRelationship : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	NSString* _targetRelationship;
	NSNumber* _isRemoval;

}

@property (nonatomic,copy,readonly) NSString * targetRelationship;              //@synthesize targetRelationship=_targetRelationship - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isRemoval;                       //@synthesize isRemoval=_isRemoval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)description;
-(NSNumber *)isRemoval;
-(NSString *)targetRelationship;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTargetRelationship:(id)arg1 isRemoval:(id)arg2 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

