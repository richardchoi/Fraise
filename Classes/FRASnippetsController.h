/*
Fraise version 3.7 - Based on Smultron by Peter Borg
Written by Jean-François Moy - jeanfrancois.moy@gmail.com
Find the latest version at http://github.com/jfmoy/Fraise

Copyright 2010 Jean-François Moy
 
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at
 
http://www.apache.org/licenses/LICENSE-2.0
 
Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
*/

#import <Cocoa/Cocoa.h>

@interface FRASnippetsController : NSObject <NSToolbarDelegate>
{ 
    IBOutlet NSArrayController *snippetCollectionsArrayController;
    IBOutlet NSTableView *snippetCollectionsTableView;
    IBOutlet NSArrayController *snippetsArrayController;
    IBOutlet NSTableView *snippetsTableView;
    IBOutlet NSWindow *snippetsWindow;
	IBOutlet NSTextView *snippetsTextView;
	IBOutlet NSView *snippetsFilterView;
}

@property (readonly) IBOutlet NSTextView *snippetsTextView;
@property (readonly) IBOutlet NSWindow *snippetsWindow;
@property (readonly) IBOutlet NSArrayController *snippetCollectionsArrayController;
@property (readonly) IBOutlet NSTableView *snippetCollectionsTableView;
@property (readonly) IBOutlet NSArrayController *snippetsArrayController;
@property (readonly) IBOutlet NSTableView *snippetsTableView;

+ (FRASnippetsController *)sharedInstance;

- (void)openSnippetsWindow;

- (IBAction)newCollectionAction:(id)sender;
- (IBAction)newSnippetAction:(id)sender;

- (id)performInsertNewSnippet;

- (void)insertSnippet:(id)snippet;

- (void)performDeleteCollection;

- (void)importSnippets;
- (void)performSnippetsImportWithPath:(NSString *)path;
- (void)exportSnippets;

- (NSManagedObjectContext *)managedObjectContext;


@end
