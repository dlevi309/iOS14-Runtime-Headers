/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Categories.framework/Categories
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface CTCategory : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _bundleIdentifier;
	NSString* _canonicalBundleIdentifier;
	NSArray* _equivalentBundleIdentifiers;
	NSArray* _webDomains;
	NSString* _primaryWebDomain;
	NSString* _secondaryIdentifier;
	NSString* _resourceString;

}

@property (nonatomic,copy) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * webDomains;                                        //@synthesize webDomains=_webDomains - In the implementation block
@property (nonatomic,copy) NSString * primaryWebDomain;                                 //@synthesize primaryWebDomain=_primaryWebDomain - In the implementation block
@property (nonatomic,copy) NSString * canonicalBundleIdentifier;                        //@synthesize canonicalBundleIdentifier=_canonicalBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * resourceString;                                   //@synthesize resourceString=_resourceString - In the implementation block
@property (nonatomic,copy) NSString * secondaryIdentifier;                              //@synthesize secondaryIdentifier=_secondaryIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (nonatomic,copy,readonly) NSArray * equivalentBundleIdentifiers;              //@synthesize equivalentBundleIdentifiers=_equivalentBundleIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * equivalentBundleIdentifers; 
@property (nonatomic,copy,readonly) NSString * primaryIdentifier; 
@property (nonatomic,copy,readonly) NSString * primaryLocalizedName; 
@property (nonatomic,copy,readonly) NSString * secondaryLocalizedName; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)_xpcConnection;
+(id)localizedNameForIdentifier:(id)arg1 ;
+(id)_DHIDtoCategoryDisplayNameMap;
+(void)categoryForBundleIdentifiers:(id)arg1 platform:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
+(void)categoryForDomainNames:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)categoryForDomainURLs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)_getCategoryTypeForDomainName:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(id)_newXpcConnection;
+(id)_identifierUsingContextKit:(id)arg1 error:(id*)arg2 relatedItems:(id*)arg3 ;
+(id)_getAssociatedDomainsForHostNames:(id)arg1 ;
+(id)_getequivalentBundleIdentifiers:(id)arg1 ;
+(id)systemAppCategoryIdentifierForBundleIdentifier:(id)arg1 ;
+(id)_overrideEquivalentIdentifiers:(id)arg1 forBundleID:(id)arg2 ;
+(void)_lookupAppStoreUsing:(id)arg1 platform:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
+(void)categoryForBundleID:(id)arg1 platform:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
+(id)_identifierUsingContextKit:(id)arg1 error:(id*)arg2 relatedItems:(id*)arg3 bundleIdentifier:(id*)arg4 ;
+(id)systemCategoryIDWithPatternMatching:(id)arg1 ;
+(id)_equivalentBundleIDsMapping;
+(id)_schemeRemovedEquivalentBundleIDsMapping:(id)arg1 ;
+(id)primaryLocalizedNameForIdentifier:(id)arg1 ;
+(id)shortLocalizedNameForIdentifier:(id)arg1 ;
+(void)categoryForBundleID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)categoryForDomainURL:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)categoryForDomainName:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(id)_DHIDtoPrimaryCategoriesMap;
+(id)_DHToAppStoreCategoriesMap;
+(id)equivalentIdentifiersForBundleID:(id)arg1 ;
+(id)itemWith:(id)arg1 platform:(id)arg2 array:(id)arg3 ;
+(id)_equivalentBundleIDsMappingForWatchOSBundleID:(id)arg1 ;
+(id)parentAppBundleIdentifierForAppRecord:(id)arg1 ;
-(NSString *)localizedName;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSArray *)webDomains;
-(id)description;
-(NSArray *)equivalentBundleIdentifiers;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)resourceString;
-(unsigned long long)hash;
-(NSString *)primaryIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToCategory:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)secondaryIdentifier;
-(void)setSecondaryIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 equivalentBundleIdentifiers:(id)arg2 webDomains:(id)arg3 bundleIdentifier:(id)arg4 primaryWebDomain:(id)arg5 ;
-(id)initWithIdentifier:(id)arg1 equivalentBundleIdentifiers:(id)arg2 webDomains:(id)arg3 bundleIdentifier:(id)arg4 primaryWebDomain:(id)arg5 canonicalBundleIdentifier:(id)arg6 ;
-(void)_ctCategoryCommonInitWithIdentifier:(id)arg1 equivalentBundleIdentifiers:(id)arg2 webDomains:(id)arg3 bundleIdentifier:(id)arg4 primaryWebDomain:(id)arg5 canonicalBundleIdentifier:(id)arg6 ;
-(NSString *)canonicalBundleIdentifier;
-(NSString *)primaryWebDomain;
-(id)initWithIdentifier:(id)arg1 equivalentBundleIdentifiers:(id)arg2 webDomains:(id)arg3 bundleIdentifier:(id)arg4 ;
-(void)setCanonicalBundleIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 webDomains:(id)arg2 bundleIdentifier:(id)arg3 primaryWebDomain:(id)arg4 ;
-(id)initWithIdentifier:(id)arg1 webDomains:(id)arg2 bundleIdentifier:(id)arg3 ;
-(NSString *)primaryLocalizedName;
-(NSString *)secondaryLocalizedName;
-(NSArray *)equivalentBundleIdentifers;
-(BOOL)isSystemBundleIdentifier;
-(void)setWebDomains:(NSArray *)arg1 ;
-(void)setPrimaryWebDomain:(NSString *)arg1 ;
-(void)setResourceString:(NSString *)arg1 ;
@end

