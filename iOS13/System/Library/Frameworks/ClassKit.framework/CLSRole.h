/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/CLSObject.h>

@class NSArray;

@interface CLSRole : CLSObject {

	BOOL _isEditable;
	long long _type;
	NSArray* _privileges;
	long long _sourceType;

}

@property (assign,nonatomic) long long type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * privileges;                //@synthesize privileges=_privileges - In the implementation block
@property (assign,nonatomic) long long sourceType;              //@synthesize sourceType=_sourceType - In the implementation block
@property (assign) BOOL isEditable;                             //@synthesize isEditable=_isEditable - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)stringForRoleType:(long long)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(id)dictionaryRepresentation;
-(long long)sourceType;
-(void)setSourceType:(long long)arg1 ;
-(BOOL)isEditable;
-(void)setIsEditable:(BOOL)arg1 ;
-(NSArray *)privileges;
-(void)setPrivileges:(NSArray *)arg1 ;
@end

