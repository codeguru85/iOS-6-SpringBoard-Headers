/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBIconIndexNode.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBIconIndexMutableListObserver.h"

@class NSMutableSet, SBFolderIcon, NSString, NSMutableDictionary, SBIconIndexMutableList, NSHashTable;

__attribute__((visibility("hidden")))
@interface SBFolder : XXUnknownSuperclass <SBIconIndexNode, SBIconIndexMutableListObserver> {
	NSString* _displayName;
	NSString* _defaultDisplayName;
	BOOL _open;
	SBFolderIcon* _icon;
	BOOL _cancelable;
	NSMutableSet* _addedIcons;
	NSMutableSet* _removedIcons;
	NSMutableDictionary* _coalesceChangesRequests;
	NSHashTable* _nodeObservers;
	SBIconIndexMutableList* _lists;
}
@property(assign, nonatomic, getter=isCancelable) BOOL cancelable;
@property(assign, nonatomic) SBFolderIcon* icon;
@property(assign, nonatomic) BOOL isOpen;
@property(retain, nonatomic) NSString* displayName;
+(int)maxListCount;
-(void)list:(id)list didRemoveContainedNodeIdentifiers:(id)identifiers;
-(void)list:(id)list didAddContainedNodeIdentifiers:(id)identifiers;
-(id)nodeDescriptionWithPrefix:(id)prefix;
-(void)removeNodeObserver:(id)observer;
-(void)addNodeObserver:(id)observer;
-(id)nodesAlongIndexPath:(id)path consumedIndexes:(unsigned)indexes;
-(id)indexPathsForContainedNodeIdentifier:(id)containedNodeIdentifier prefixPath:(id)path;
-(id)containedNodeIdentifiers;
-(BOOL)containsNodeIdentifier:(id)identifier;
-(id)nodeIdentifier;
-(BOOL)matchesRepresentation:(id)representation;
-(id)representation;
-(id)folderType;
-(BOOL)resetWithRepresentation:(id)representation model:(id)model leafIdentifiersAdded:(id)added;
-(void)_setDisplayNameFromRepresentation:(id)representation;
-(void)stopCoalescingContentChangesForRequestID:(id)requestID forceReload:(BOOL)reload;
-(void)stopCoalescingContentChangesForRequestID:(id)requestID;
-(void)startCoalescingContentChangesWithRequestID:(id)requestID;
-(void)noteIcon:(id)icon replacedIcon:(id)icon2;
-(void)noteIconRemoved:(id)removed;
-(void)noteIconAdded:(id)added;
-(BOOL)_isCoalescingContentChanges;
-(id)folderContainingIndexPath:(id)path relativeIndexPath:(id*)path2;
-(id)iconAtIndexPath:(id)indexPath;
-(id)indexPathForIconWithIdentifier:(id)identifier;
-(id)indexPathForIcon:(id)icon;
-(id)indexPathForNodeIdentifier:(id)nodeIdentifier;
-(id)listContainingLeafIconWithIdentifier:(id)identifier;
-(id)listContainingIcon:(id)icon;
-(id)visibleIcons;
-(id)folderIcons;
-(id)leafIcons;
-(id)allIcons;
-(id)iconsOfClass:(Class)aClass;
-(id)indexPathForFirstFreeSlotAvoidingFirstList:(BOOL)firstFreeSlotAvoidingFirstList;
-(id)performCascadingIconInsertion:(id)insertion listIndex:(unsigned)index iconIndex:(unsigned)index3 addPageIfNecessary:(BOOL)necessary;
-(BOOL)canAddIcon;
-(id)addIcon:(id)icon;
-(void)removeIconAtIndexPath:(id)indexPath;
-(id)insertIcon:(id)icon atIndexPath:(id*)indexPath;
-(id)placeIcon:(id)icon atIndexPath:(id*)indexPath;
-(void)purgeLists;
-(unsigned)indexOfList:(id)list;
-(id)listAtIndex:(unsigned)index;
-(void)markIconStateClean;
-(BOOL)isIconStateDirty;
-(void)removeEmptyList:(id)list;
-(id)addEmptyList;
-(void)compactIconsAndLists;
-(BOOL)compactLists;
-(BOOL)isNewsstandFolder;
-(BOOL)isFull;
-(BOOL)isEmpty;
-(unsigned)listCount;
-(id)lists;
-(void)purgeIconImages;
-(void)dealloc;
-(id)init;
-(Class)folderSlidingViewClass;
-(Class)folderViewClass;
-(Class)listViewClass;
-(Class)listModelClass;
@end
