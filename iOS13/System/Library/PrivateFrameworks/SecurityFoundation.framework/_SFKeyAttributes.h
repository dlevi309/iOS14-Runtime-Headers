/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

@class _SFKeySpecifier, NSString;


@protocol _SFKeyAttributes <NSObject,NSCopying>
@property (nonatomic,copy,readonly) _SFKeySpecifier * keySpecifier; 
@property (nonatomic,copy,readonly) NSString * keyDomain; 
@required
+(id)alloc;
-(_SFKeySpecifier *)keySpecifier;
-(NSString *)keyDomain;

@end

