/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
*/

#import <libobjc.A.dylib/CNVCardNameDataSource.h>

@class NSString;

@interface CNVCardNameComponents : NSObject <CNVCardNameDataSource> {

	NSString* _formattedName;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _middleName;
	NSString* _title;
	NSString* _suffix;
	NSString* _companyName;
	BOOL _isCompany;

}

@property (copy,readonly) NSString * formattedName;                 //@synthesize formattedName=_formattedName - In the implementation block
@property (readonly) BOOL isCompany;                                //@synthesize isCompany=_isCompany - In the implementation block
@property (readonly) NSString * firstName;                          //@synthesize firstName=_firstName - In the implementation block
@property (readonly) NSString * lastName;                           //@synthesize lastName=_lastName - In the implementation block
@property (readonly) NSString * middleName;                         //@synthesize middleName=_middleName - In the implementation block
@property (readonly) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (readonly) NSString * suffix;                             //@synthesize suffix=_suffix - In the implementation block
@property (readonly) NSString * companyName;                        //@synthesize companyName=_companyName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)components;
+(id)componentsWithFirstName:(id)arg1 lastName:(id)arg2 middleName:(id)arg3 title:(id)arg4 suffix:(id)arg5 companyName:(id)arg6 isCompany:(BOOL)arg7 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)suffix;
-(NSString *)middleName;
-(NSString *)formattedName;
-(BOOL)isCompany;
-(NSString *)companyName;
-(NSString *)title;
@end

