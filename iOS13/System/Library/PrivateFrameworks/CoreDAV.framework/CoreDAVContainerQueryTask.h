/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVTask.h>

@class NSSet, NSString;

@interface CoreDAVContainerQueryTask : CoreDAVTask {

	NSSet* _searchTerms;
	unsigned long long _searchLimit;
	NSString* _appSpecificNamespace;
	NSString* _appSpecificQueryCommand;
	NSString* _appSpecificDataProp;
	Class _appSpecificDataItemClass;

}

@property (assign,nonatomic,__weak) id<CoreDAVContainerQueryTaskDelegate> delegate; 
+(id)_copySearchTermsFromSearchString:(id)arg1 ;
-(id)httpMethod;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)initWithSearchTerms:(id)arg1 searchLimit:(unsigned long long)arg2 atURL:(id)arg3 appSpecificDataItemClass:(Class)arg4 ;
-(void)addFiltersToXMLData:(id)arg1 ;
-(id)initWithSearchString:(id)arg1 searchLimit:(unsigned long long)arg2 atURL:(id)arg3 appSpecificDataItemClass:(Class)arg4 ;
-(id)_initWithSearchTerms:(id)arg1 searchLimit:(unsigned long long)arg2 atURL:(id)arg3 appSpecificDataItemClass:(Class)arg4 ;
@end

