<?

$data = date("r");

echo " <BR>Started at: $data<BR>";
flush(NULL);

$x_text_document = newDocComponent("swriter");
$x_text = $x_text_document->getText();
// simply set whole text as one string
$x_text->setString("He lay flat on the brown, pine-needled flor of the forest, "
        . "his chin on his folden arms, and high overhead the wind blew in the tops "
        . "of the pine trees.");

// create text cursor for selecting and formatting
$x_text_cursor = $x_text->createTextCursor();

// use cursor to select "He lay" and apply bold italic
$x_text_cursor->gotoStart(false);

$x_text_cursor->goRight(06, true);
$x_text_cursor->setPropertyValue("CharWeight", FontWeight_BOLD);
// add more text at the end of the text using insertString
$x_text_cursor->gotoEnd(false);
$x_text->insertString($x_text_cursor, " The mountainside sloped gently where he lay; "
        . "but below it was steep and he could see the dark of the oiled road "
        . "winding through the pass. There was a stream alongside the road "
        . "and far down the pass he saw a mill beside the stream and the falling water "
        . "of the dam, white in the summer sunlight.", false);

// after insertString the cursor is behind the inserted text, insert more text
$x_text->insertString($x_text_cursor, "\n  \"Is that the mill?\" he asked.", false);

$store_props = array();
$store_props[0] = create_struct("com.sun.star.beans.PropertyValue");
$store_props[0]->Name = "FilterName";
$store_props[0]->Value = "writer_pdf_Export";

$x_text_document->storeToURl("file:///tmp/example01.pdf", $store_props);
$data = date("r");
$x_text_document->dispose();
echo " <BR>Finished at: $data<BR>";

function newDocComponent($doc_type) {

    $x_component_loader = get_remote_xcomponent("uno:socket,host=localhost,port=2083;urp;StarOffice.ServiceManager", "com.sun.star.frame.Desktop");

    $load_url = "private:factory/" . $doc_type;
    $load_props = array();
    $x_component = $x_component_loader->loadComponentFromURL($load_url, "_blank", 0, $load_props);


    return $x_component;
}


//$office = new libreoffice(); $office->opendoc('abc.doc'); $office->savedoc();
?>
