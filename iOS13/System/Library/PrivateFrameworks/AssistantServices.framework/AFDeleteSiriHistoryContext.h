/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AFDeleteSiriHistoryContext : NSObject <NSCopying, NSSecureCoding> {

	NSString* _successTitle;
	NSString* _successBody;
	NSString* _successButtonText;
	NSString* _errorTitle;
	NSString* _errorBody;
	NSString* _errorButtonText;

}

@property (nonatomic,copy,readonly) NSString * successTitle;                   //@synthesize successTitle=_successTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * successBody;                    //@synthesize successBody=_successBody - In the implementation block
@property (nonatomic,copy,readonly) NSString * successButtonText;              //@synthesize successButtonText=_successButtonText - In the implementation block
@property (nonatomic,copy,readonly) NSString * errorTitle;                     //@synthesize errorTitle=_errorTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * errorBody;                      //@synthesize errorBody=_errorBody - In the implementation block
@property (nonatomic,copy,readonly) NSString * errorButtonText;                //@synthesize errorButtonText=_errorButtonText - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(NSString *)errorTitle;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(NSString *)successTitle;
-(NSString *)successBody;
-(NSString *)successButtonText;
-(NSString *)errorBody;
-(NSString *)errorButtonText;
-(id)initWithSuccessTitle:(id)arg1 successBody:(id)arg2 successButtonText:(id)arg3 errorTitle:(id)arg4 errorBody:(id)arg5 errorButtonText:(id)arg6 ;
@end

