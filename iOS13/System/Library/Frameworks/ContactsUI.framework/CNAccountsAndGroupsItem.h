/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@class NSString, NSArray;

@interface CNAccountsAndGroupsItem : NSObject {

	BOOL _selected;
	BOOL _bypassIfUnique;
	BOOL _soloSelect;
	NSString* _name;
	/*^block*/id _nameProvider;
	NSString* _identifier;
	long long _containerType;
	NSArray* _childItems;
	CNAccountsAndGroupsItem* _parentItem;
	long long _type;

}

@property (nonatomic,retain) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) id nameProvider;                                   //@synthesize nameProvider=_nameProvider - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long containerType;                                  //@synthesize containerType=_containerType - In the implementation block
@property (nonatomic,retain) NSArray * childItems;                                     //@synthesize childItems=_childItems - In the implementation block
@property (assign,nonatomic,__weak) CNAccountsAndGroupsItem * parentItem;              //@synthesize parentItem=_parentItem - In the implementation block
@property (assign,nonatomic) BOOL bypassIfUnique;                                      //@synthesize bypassIfUnique=_bypassIfUnique - In the implementation block
@property (assign,nonatomic) BOOL soloSelect;                                          //@synthesize soloSelect=_soloSelect - In the implementation block
@property (nonatomic,readonly) long long type;                                         //@synthesize type=_type - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                          //@synthesize selected=_selected - In the implementation block
-(NSString *)name;
-(long long)type;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)localizedCompare:(id)arg1 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(NSArray *)childItems;
-(void)setChildItems:(NSArray *)arg1 ;
-(long long)containerType;
-(id)nameProvider;
-(id)initWithType:(long long)arg1 nameProvider:(/*^block*/id)arg2 ;
-(void)_setSelected:(BOOL)arg1 affectingChildren:(BOOL)arg2 ;
-(id)arrayForDisplay:(BOOL)arg1 ;
-(void)setContainerType:(long long)arg1 ;
-(CNAccountsAndGroupsItem *)parentItem;
-(void)setParentItem:(CNAccountsAndGroupsItem *)arg1 ;
-(BOOL)bypassIfUnique;
-(void)setBypassIfUnique:(BOOL)arg1 ;
-(BOOL)soloSelect;
-(void)setSoloSelect:(BOOL)arg1 ;
@end
