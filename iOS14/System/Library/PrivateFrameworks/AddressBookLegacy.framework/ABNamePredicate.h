/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
*/

#import <AddressBookLegacy/AddressBookLegacy-Structs.h>
#import <AddressBookLegacy/ABPredicate.h>

@class NSString, NSArray;

@interface ABNamePredicate : ABPredicate {

	void* _addressBook;
	void* _tokenizations;
	CFArrayRef _tokenizationSortKeys;
	BOOL _matchWholeWords;
	BOOL _matchPersonOrCompanyNamesExclusively;
	BOOL _matchPreferredName;
	BOOL _generateExceprts;
	NSString* _name;
	NSArray* _sources;
	NSArray* _groups;
	NSArray* _scopedContactIdentifiers;

}

@property (assign,nonatomic) void* addressBook; 
@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSArray * sources;                                      //@synthesize sources=_sources - In the implementation block
@property (nonatomic,retain) NSArray * groups;                                       //@synthesize groups=_groups - In the implementation block
@property (assign,nonatomic) void* source; 
@property (assign,nonatomic) void* group; 
@property (nonatomic,copy) NSString * accountIdentifier; 
@property (assign,nonatomic) BOOL matchWholeWords;                                   //@synthesize matchWholeWords=_matchWholeWords - In the implementation block
@property (assign,nonatomic) BOOL matchPersonOrCompanyNamesExclusively;              //@synthesize matchPersonOrCompanyNamesExclusively=_matchPersonOrCompanyNamesExclusively - In the implementation block
@property (assign,nonatomic) BOOL matchPreferredName;                                //@synthesize matchPreferredName=_matchPreferredName - In the implementation block
@property (assign,nonatomic) BOOL generateExceprts;                                  //@synthesize generateExceprts=_generateExceprts - In the implementation block
@property (nonatomic,retain) NSArray * scopedContactIdentifiers;                     //@synthesize scopedContactIdentifiers=_scopedContactIdentifiers - In the implementation block
-(id)predicateFormat;
-(void)setGroup:(void*)arg1 ;
-(void*)group;
-(void)setSources:(NSArray *)arg1 ;
-(id)init;
-(id)queryWhereStringForPredicateIdentifier:(int)arg1 ;
-(void)ab_bindWhereClauseComponentOfStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(void*)tokenizations;
-(BOOL)generateExceprts;
-(id)emphasizedExcerptStringForMatchString:(id)arg1 ;
-(BOOL)matchPersonOrCompanyNamesExclusively;
-(id)_personNameKeys;
-(id)_matchClauseForColumns:(id)arg1 requiringAllTerms:(BOOL)arg2 ;
-(NSArray *)scopedContactIdentifiers;
-(BOOL)matchWholeWords;
-(BOOL)matchPreferredName;
-(id)ab_metadataForMatchingRow:(CPSqliteStatement*)arg1 columnOffset:(int)arg2 ;
-(id)querySelectPropertiesForPredicateIdentifier:(int)arg1 ;
-(id)_personNonNameKeys;
-(id)queryJoinsInCompound:(BOOL)arg1 predicateIdentifier:(int)arg2 ;
-(id)queryRankStringForPredicateIdentifier:(int)arg1 ;
-(void)ab_bindJoinClauseComponentOfStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(void*)addressBook;
-(void)setMatchWholeWords:(BOOL)arg1 ;
-(void)setMatchPersonOrCompanyNamesExclusively:(BOOL)arg1 ;
-(void)setMatchPreferredName:(BOOL)arg1 ;
-(void)setGenerateExceprts:(BOOL)arg1 ;
-(void)setScopedContactIdentifiers:(NSArray *)arg1 ;
-(NSString *)accountIdentifier;
-(NSArray *)sources;
-(void)setGroups:(NSArray *)arg1 ;
-(NSArray *)groups;
-(void)setSource:(void*)arg1 ;
-(NSString *)name;
-(BOOL)isValid;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)dealloc;
-(void*)source;
-(void)setAddressBook:(void*)arg1 ;
@end

