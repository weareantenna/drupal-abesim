<?php
/**
 * @file
 * fo2_content.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function fo2_content_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Nieuws',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'fec437e7-d653-407b-b8a2-1acd18b314b3',
  'ds_switch' => '',
  'type' => 'block',
  'language' => 'nl',
  'created' => 1427212320,
  'tnid' => 1,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '0167b0f5-99f2-45fd-a984-46aacdb56b9a',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Wat beweegt er?</p>
<p><a href="/nl/node/23">[[{"fid":"43","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"Nieuws","field_file_image_title_text[und][0][value]":"Nieuws"},"type":"media","link_text":null,"attributes":{"alt":"Nieuws","title":"Nieuws","class":"media-element file-default"}}]]</a></p>
<p><a class="more" href="/nl/node/23">Lees meer</a></p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Wat beweegt er?</p>
<p><a href="/nl/node/23"><img alt="Nieuws" title="Nieuws" class="media-element file-default" typeof="foaf:Image" src="http://default/sites/default/files/a3.jpg" /></a></p>
<p><a class="more" href="/nl/node/23">Lees meer</a></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'menu_node_links' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-03-24 16:52:00 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Toegang geweigerd',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '14ecc78d-5f1f-4ca9-a47b-7efb3b836c38',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'nl',
  'created' => 1418283432,
  'tnid' => 2,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '0a657d45-7ddd-49d9-800e-5100a76a510f',
  'revision_uid' => 1,
  'body' => array(),
  'field_authors' => array(),
  'field_contact' => array(),
  'field_contact_form' => array(),
  'field_contact_text' => array(),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'nid' => '0a657d45-7ddd-49d9-800e-5100a76a510f',
    'next_serial' => 1,
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'confidential' => 0,
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(),
    'conditionals' => array(),
  ),
  'menu_node_links' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-12-11 08:37:12 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Jobs',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'df886767-bbd6-4da7-872c-6eab86e9c515',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'nl',
  'created' => 1427791119,
  'tnid' => 3,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '0be3c125-c1eb-430b-9ffb-a814eafa7409',
  'revision_uid' => 23,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Op dit ogenblik zijn er geen openstaande vacatures.</p>
<p>Mocht u desalniettemin ervan overtuigd zijn een meerwaarde te kunnen bieden voor ons team, aarzel niet ons uw CV en brief te bezorgen via <a href="mailto:info@abesim.com?subject=Website%20Abesim%20-%20Jobs">info@abesim.com</a> of per post naar Europalaan 26, 9800 Deinze.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Op dit ogenblik zijn er geen openstaande vacatures.</p>
<p>Mocht u desalniettemin ervan overtuigd zijn een meerwaarde te kunnen bieden voor ons team, aarzel niet ons uw CV en brief te bezorgen via <a href="mailto:info@abesim.com?subject=Website%20Abesim%20-%20Jobs">info@abesim.com</a> of per post naar Europalaan 26, 9800 Deinze.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_authors' => array(),
  'field_contact' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_contact_form' => array(
    'und' => array(
      0 => array(
        'target_id' => 44,
      ),
    ),
  ),
  'field_contact_text' => array(
    'und' => array(
      0 => array(
        'value' => '<p><em>Meer info?</em></p>
<p>Stuur een <strong>bericht via het contactformulier</strong></p>
<p>of neem persoonlijk contact op via één van onze adressen.</p>
<p>We helpen u graag verder.</p>
',
        'format' => 'full_html',
        'safe_value' => '<p><em>Meer info?</em></p>
<p>Stuur een <strong>bericht via het contactformulier</strong></p>
<p>of neem persoonlijk contact op via één van onze adressen.</p>
<p>We helpen u graag verder.</p>
',
      ),
    ),
  ),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'confidential' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'next_serial' => 1,
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_bar' => 1,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'status' => 1,
    'record_exists' => FALSE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(),
    'conditionals' => array(),
    'nid' => '0be3c125-c1eb-430b-9ffb-a814eafa7409',
  ),
  'menu_node_links' => array(
    465 => array(
      'menu_name' => 'main-menu',
      'mlid' => 465,
      'plid' => 0,
      'link_path' => 'node/3',
      'router_path' => 'node/%',
      'link_title' => 'Jobs',
      'options' => 'a:2:{s:9:"node_type";s:4:"page";s:5:"alter";b:1;}',
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => -46,
      'depth' => 1,
      'customized' => 1,
      'p1' => 465,
      'p2' => 0,
      'p3' => 0,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'uuid' => 'ae942bc3-cb52-4f74-89af-8ac971d7b857',
      'language' => 'nl',
      'i18n_tsid' => 0,
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-03-31 10:38:39 +0200',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Werkwijze en visie',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '6ec515df-fcc6-48e3-b082-ff383714ed8c',
  'ds_switch' => '',
  'type' => 'block',
  'language' => 'nl',
  'created' => 1427281368,
  'tnid' => 4,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '0db68f73-14f5-425e-9cf5-513111fe89fb',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h2>Werkwijze &amp; visie</h2>
<p>[[{"fid":"81","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"","field_file_image_title_text[und][0][value]":""},"type":"media","attributes":{"class":"media-element file-default"},"link_text":null}]]</p>
<p>Samen met u bepalen we welk resultaat wij vooropstellen om een concreet probleem op te lossen. We brengen het probleem objectief in kaart en zoeken uit hoe we dit het beste aanpakken.</p>
<p>Na het uitvoeren bekijken we samen of het probleem een bevredigende oplossing kreeg. Indien nodig volgt bijkomende actie.</p>
<p class="more"><a class="more" href="/nl/node/39">Lees meer</a></p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<h2>Werkwijze &amp; visie</h2>
<p><img class="media-element file-default" typeof="foaf:Image" src="http://default/sites/default/files/management.jpg" alt="" /></p>
<p>Samen met u bepalen we welk resultaat wij vooropstellen om een concreet probleem op te lossen. We brengen het probleem objectief in kaart en zoeken uit hoe we dit het beste aanpakken.</p>
<p>Na het uitvoeren bekijken we samen of het probleem een bevredigende oplossing kreeg. Indien nodig volgt bijkomende actie.</p>
<p class="more"><a class="more" href="/nl/node/39">Lees meer</a></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'menu_node_links' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-03-25 12:02:48 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => ' Clause de non responsabilité',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'd466c0bf-72e2-4a17-8a51-6a8d8f875e22',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'fr',
  'created' => 1421402618,
  'tnid' => 16,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '143bc15f-dffe-4fb0-9602-57f48ab12de0',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h2>Clause de non responsabilité</h2>
<h4>1. Protection de la vie privée</h4>
<p>Abesim apprécie votre intérêt pour ses produits et son site Internet. Nous tenons à ce que vous sachiez comment sont traitées les données personnelles que vous nous transmettez et à ce que la visite de notre site ne vous cause de souci à aucun moment.</p>
<p>Les données personnelles que vous nous fournissez, y compris votre adresse électronique, seront traitées de la manière suivante :</p>
<ul>
	<li>Nous conservons les données que vous nous fournissez en vue d\'obtenir des informations de notre part (bilan annuel ou autre document, par exemple) afin de donner suite à votre demande.</li>
	<li>Nous conservons les informations que vous nous fournissez dans le cadre d\'une candidature et nous les traitons uniquement à cet effet avec toutes les précautions requises.</li>
	<li>Nous ne pouvons gérer en toute sécurité les informations personnelles que vous nous envoyez qu\'une fois que celles-ci ont passé notre coupe-feu (filtre de protection). Pensez-y lorsque vous envoyez des informations confidentielles.</li>
	<li>Les informations conservées nous serviront également en interne pour effectuer des évaluations concernant les visites de notre site en vue de son amélioration constante. Nous les utiliserons également pour vous informer de l\'actualité de Abesim et de ses produits. Si vous souhaitez que vos coordonnées ne soient pas ou plus utilisées à cet effet, veuillez nous le faire savoir.</li>
	<li>Nous nous engageons à ne pas transmettre ni vendre vos données personnelles à des tiers autres que les différentes divisions de Abesim ou ses partenaires directs.</li>
	<li>Notre site Internet comporte des liens vers des autres sites. Abesim ne peut être tenue responsable de la politique en matière de confidentialité suivie par ces sites.&nbsp;</li>
</ul>
<p>Toutes les données personnelles fournies sont conservées dans un fichier dont est propriétaire Abesim sprl, 62, Rue Provinciale, B-1301 Wavre, Belgique. Ces données sont destinées à la promotion des produits de Abesim. Vous bénéficiez d\'un droit de consultation et de correction de vos données personnelles. Pour tout renseignement complémentaire, vous pouvez vous adresser au Registre public de la Commission de la protection de la vie privée.</p>
<h4>2. Conditions d\'utilisation</h4>
<p>La visite de ce site est régie par nos conditions d\'utilisation et par l\'ensemble de la législation applicable. La visite de ce site implique de votre part l\'acceptation sans restriction ni exclusion des conditions d\'utilisation décrites ci-dessous.</p>
<h4>3. Droit d\'auteur</h4>
<p>Le contenu de ce site est protégé par le droit d\'auteur et ces droits sont détenus par Abesim et ses fournisseurs et partenaires. Tous les droits sont réservés. Sauf mention contraire, les informations contenues dans le site (dont, entre autres, le texte, les présentations, les illustrations, les photos et les illustrations sonores) ne peuvent être copiées, déplacées, diffusées ou enregistrées sans accord écrit préalable de Abesim. Les modifications du contenu du site sont expressément interdites. Certaines parties du site contiennent des illustrations explicitement protégées par le droit d\'auteur de leurs créateurs.</p>
<h4>4. Ni garantie ni responsabilité</h4>
<p>Les informations présentées sur ce site ne sauraient en aucune façon justifier de droit ou de responsabilité. Abesim ne peut être tenue responsable des informations fournies sur des sites auxquels vous auriez accédé via son site. Les liens sont un service que nous vous proposons et n\'entraînent aucune responsabilité de la part de Abesim quant au contenu des sites. En outre, c\'est à vous qu\'il incombe de vérifier que ces sites ne contiennent aucun virus ni élément à caractère nuisible. Nous sommes en droit de modifier les informations contenues sur notre site sans préavis ni obligation préalable.</p>
<h4>5. Remarques, questions et suggestions</h4>
<p>Abesim ne souhaite pas recevoir d\'informations strictement confidentielles ou privées via ce site. Toutes les informations que vous nous transmettrez (suggestions, idées et autres) seront considérées comme non confidentielles et publiques, compte tenu de notre politique en matière de protection de la vie privée concernant vos données personnelles telle qu\'exposée ci-dessus. En envoyant des documents à Abesim, vous lui donnez le droit illimité et irrévocable d\'utiliser ces informations, de les publier, de les modifier, de les traiter, de les diffuser et de les faire protéger légalement. Abesim est également en droit d\'appliquer librement les idées et les techniques que vous lui soumettez. Abesim a développé ce site avec le plus grand soin, mais se réjouit néanmoins de toute suggestion ou commentaire à son sujet. Si vous avez des plaintes concernant certains textes ou illustrations, vous pouvez également nous les faire parvenir.</p>
<h4>6. Généralités</h4>
<p>Abesim est libre de modifier les présentes conditions d\'utilisation à tout moment en publiant une nouvelle version sur son site. Les conditions d\'utilisation relèvent du droit du pays où Abesim a son siège légal, à savoir la Belgique, et tout litige sera régi par le droit belge. Si un tribunal compétent devait estimer qu\'une partie des présentes conditions d\'utilisation est nulle et inapplicable, la partie concernée des conditions d\'utilisation sera présumée supprimée tandis que les dispositions restantes seront présumées pleinement valables et applicables.</p>
<h4>7. Politique en matière de cookies</h4>
<p>Abesim utilise des cookies afin de mieux adapter ses sites web à vos besoins et vos préférences. Vous avez la possibilité de refuser les cookies. Dans ce cas, nous attirons votre attention sur le fait que nos sites web ne pourront pas fonctionner de manière optimale. Il est possible que vous ne puissiez pas accéder à certains services que nous proposons sur nos sites web.</p>
<p>Si vous ne refusez pas la génération de cookies et que vous choisissez l’option ‘continuer’, Abesim considère que vous acceptez ses cookies.</p>
<h5>Vous trouvez de plus amples informations sur les cookies ci-dessous, sous forme de Q&amp;A.</h5>
<h6>Qu’est-ce qu’un cookie?</h6>
<p>Un cookie est un petit fichier texte généré par le site internet que vous consultez et stocké dans le navigateur de votre ordinateur ou de votre appareil mobile – Smartphone, iPhone, iPad, etc. Un cookie contient un code qui ne peut être lu que par le serveur qui l’y a placé. Le serveur n’a donc pas accès aux autres informations qui se trouvent sur votre ordinateur ou votre appareil mobile.</p>
<h6>Comment est conçu un fichier cookie?</h6>
<p>Composition d’un fichier cookie:</p>
<ul>
	<li>Le nom du serveur qui a généré le fichier cookie</li>
	<li>La mention d’une date d’échéance</li>
	<li>Un code chiffré unique</li>
</ul>
<h6>Quelle est l’utilité d’un cookie?</h6>
<p>Les cookies nous permettent d’optimiser au maximum votre expérience de surf en tant que visiteur de l’un de nos sites web. Notamment en vous permettant de naviguer plus vite et plus facilement entre les différentes rubriques du site web ou en adaptant le contenu de notre site à vos préférences personnelles, par exemple au niveau de la langue.</p>
<h6>Où puis-je retrouver ces cookies?</h6>
<p>Les cookies sont stockés dans un dossier à part du navigateur de votre ordinateur ou de votre appareil mobile.</p>
<h6>Qu’est-ce qu’un ‘Cookie de session’?</h6>
<p>Ce cookie a pour fonction de reconnaître votre navigateur pendant la durée de votre visite sur nos sites web.</p>
<h6>Qu’est-ce qu’un ‘Cookie permanent’?</h6>
<p>Ce cookie a pour fonction de reconnaître votre navigateur dans l’optique de visites récurrentes sur nos sites web.</p>
<h6>Quels cookies sont indispensables?</h6>
<p>Si vous désactivez les cookies indispensables, vous aurez l’impression que certaines parties de nos sites web de fonctionnent pas ou pas comme elles le devraient. Abesim utilise ce type de cookie lorsque vous complétez un formulaire ou pour pouvoir discuter sur ses blogs, par exemple. Abesim utilise les ‘cookies indispensables’ lorsque vous souhaitez vous identifier sur votre compte personnel. Ces cookies nous permettent de contrôler votre identité de manière sécurisée avant de permettre l’accès aux informations personnelles que vous avez communiquées.</p>
<h6>Qu’est-ce qu’un ‘Cookie de fonctionnalité’?</h6>
<p>Comme leur nom l’indique, ces cookies veillent au fonctionnement optimal de nos sites web de manière à vous garantir une navigation agréable et personnalisée. Abesim utilise les ‘cookies de fonctionnalité’ pour ‘mémoriser’ vos préférences personnelles et pour éviter la communication des mêmes informations en cas de visites récurrentes, par exemple dans le cas d’une participation à une action.</p>
<h6>Qu’est-ce qu’un ‘Cookie de performance’?</h6>
<p>Abesim utilise les ‘cookies de performance’ afin de recueillir des informations relatives à la façon dont vous utilisez nos sites web de manière à en adapter et en améliorer les contenus et la convivialité. Ces cookies retiennent par exemple le nombre de visiteurs par page ou la langue dans laquelle le site web est le plus souvent consulté.</p>
<h6>Qu’est-ce qu’un ‘Cookie de tierce partie’?</h6>
<p>Les cookies de tierce partie proviennent des publicités postées par des tiers sur les sites web de Abesim. Ils ont pour but d’adapter les publicités et/ou leur contenu à vos préférences personnelles. Ces cookies sont visibles uniquement si vous ne les avez pas désactivés. L’utilisation de cookies de tierce partie ne donne en aucun cas accès à vos informations personnelles, ni à Abesim ni aux annonceurs (les tiers).</p>
<h6>Qu’est-ce que le ‘Contenu intégré’?</h6>
<p><span style="font-size: 13.0080003738403px; line-height: 1.538em;">Les sites web de Abesim peuvent rediriger vers d’autres sites via un lien cliquable. Vous arrivez alors sur le site web d’une autre organisation. Il est possible que le site vers lequel vous avez été redirigé utilise également des cookies. Abesim vous conseille dès lors de consulter les conditions d’utilisation de l’organisation concernée, mentionnées sur son site web, et de vous informer sur sa politique en matière de vie privée et de cookies.</span></p>
<h6>Comment gérer les cookies?</h6>
<p>C’est vous qui assurez la gestion de vos cookies. Vous pouvez modifier les paramètres de votre navigateur en fonction de vos préférences personnelles. Vous pouvez à tout moment supprimer les cookies installés et refuser les nouveaux cookies en modifiant les paramètres de votre navigateur.</p>
<p>Le site web ci-dessous vous offre un aperçu des navigateurs les plus utilisés et vous guide dans le paramétrage de votre navigateur en fonction de vos préférences: http://www.aboutcookies.org/</p>
<p>Fin des conditions d\'utilisation.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<h2>Clause de non responsabilité</h2>
<h4>1. Protection de la vie privée</h4>
<p>Abesim apprécie votre intérêt pour ses produits et son site Internet. Nous tenons à ce que vous sachiez comment sont traitées les données personnelles que vous nous transmettez et à ce que la visite de notre site ne vous cause de souci à aucun moment.</p>
<p>Les données personnelles que vous nous fournissez, y compris votre adresse électronique, seront traitées de la manière suivante :</p>
<ul><li>Nous conservons les données que vous nous fournissez en vue d\'obtenir des informations de notre part (bilan annuel ou autre document, par exemple) afin de donner suite à votre demande.</li>
<li>Nous conservons les informations que vous nous fournissez dans le cadre d\'une candidature et nous les traitons uniquement à cet effet avec toutes les précautions requises.</li>
<li>Nous ne pouvons gérer en toute sécurité les informations personnelles que vous nous envoyez qu\'une fois que celles-ci ont passé notre coupe-feu (filtre de protection). Pensez-y lorsque vous envoyez des informations confidentielles.</li>
<li>Les informations conservées nous serviront également en interne pour effectuer des évaluations concernant les visites de notre site en vue de son amélioration constante. Nous les utiliserons également pour vous informer de l\'actualité de Abesim et de ses produits. Si vous souhaitez que vos coordonnées ne soient pas ou plus utilisées à cet effet, veuillez nous le faire savoir.</li>
<li>Nous nous engageons à ne pas transmettre ni vendre vos données personnelles à des tiers autres que les différentes divisions de Abesim ou ses partenaires directs.</li>
<li>Notre site Internet comporte des liens vers des autres sites. Abesim ne peut être tenue responsable de la politique en matière de confidentialité suivie par ces sites. </li>
</ul><p>Toutes les données personnelles fournies sont conservées dans un fichier dont est propriétaire Abesim sprl, 62, Rue Provinciale, B-1301 Wavre, Belgique. Ces données sont destinées à la promotion des produits de Abesim. Vous bénéficiez d\'un droit de consultation et de correction de vos données personnelles. Pour tout renseignement complémentaire, vous pouvez vous adresser au Registre public de la Commission de la protection de la vie privée.</p>
<h4>2. Conditions d\'utilisation</h4>
<p>La visite de ce site est régie par nos conditions d\'utilisation et par l\'ensemble de la législation applicable. La visite de ce site implique de votre part l\'acceptation sans restriction ni exclusion des conditions d\'utilisation décrites ci-dessous.</p>
<h4>3. Droit d\'auteur</h4>
<p>Le contenu de ce site est protégé par le droit d\'auteur et ces droits sont détenus par Abesim et ses fournisseurs et partenaires. Tous les droits sont réservés. Sauf mention contraire, les informations contenues dans le site (dont, entre autres, le texte, les présentations, les illustrations, les photos et les illustrations sonores) ne peuvent être copiées, déplacées, diffusées ou enregistrées sans accord écrit préalable de Abesim. Les modifications du contenu du site sont expressément interdites. Certaines parties du site contiennent des illustrations explicitement protégées par le droit d\'auteur de leurs créateurs.</p>
<h4>4. Ni garantie ni responsabilité</h4>
<p>Les informations présentées sur ce site ne sauraient en aucune façon justifier de droit ou de responsabilité. Abesim ne peut être tenue responsable des informations fournies sur des sites auxquels vous auriez accédé via son site. Les liens sont un service que nous vous proposons et n\'entraînent aucune responsabilité de la part de Abesim quant au contenu des sites. En outre, c\'est à vous qu\'il incombe de vérifier que ces sites ne contiennent aucun virus ni élément à caractère nuisible. Nous sommes en droit de modifier les informations contenues sur notre site sans préavis ni obligation préalable.</p>
<h4>5. Remarques, questions et suggestions</h4>
<p>Abesim ne souhaite pas recevoir d\'informations strictement confidentielles ou privées via ce site. Toutes les informations que vous nous transmettrez (suggestions, idées et autres) seront considérées comme non confidentielles et publiques, compte tenu de notre politique en matière de protection de la vie privée concernant vos données personnelles telle qu\'exposée ci-dessus. En envoyant des documents à Abesim, vous lui donnez le droit illimité et irrévocable d\'utiliser ces informations, de les publier, de les modifier, de les traiter, de les diffuser et de les faire protéger légalement. Abesim est également en droit d\'appliquer librement les idées et les techniques que vous lui soumettez. Abesim a développé ce site avec le plus grand soin, mais se réjouit néanmoins de toute suggestion ou commentaire à son sujet. Si vous avez des plaintes concernant certains textes ou illustrations, vous pouvez également nous les faire parvenir.</p>
<h4>6. Généralités</h4>
<p>Abesim est libre de modifier les présentes conditions d\'utilisation à tout moment en publiant une nouvelle version sur son site. Les conditions d\'utilisation relèvent du droit du pays où Abesim a son siège légal, à savoir la Belgique, et tout litige sera régi par le droit belge. Si un tribunal compétent devait estimer qu\'une partie des présentes conditions d\'utilisation est nulle et inapplicable, la partie concernée des conditions d\'utilisation sera présumée supprimée tandis que les dispositions restantes seront présumées pleinement valables et applicables.</p>
<h4>7. Politique en matière de cookies</h4>
<p>Abesim utilise des cookies afin de mieux adapter ses sites web à vos besoins et vos préférences. Vous avez la possibilité de refuser les cookies. Dans ce cas, nous attirons votre attention sur le fait que nos sites web ne pourront pas fonctionner de manière optimale. Il est possible que vous ne puissiez pas accéder à certains services que nous proposons sur nos sites web.</p>
<p>Si vous ne refusez pas la génération de cookies et que vous choisissez l’option ‘continuer’, Abesim considère que vous acceptez ses cookies.</p>
<h5>Vous trouvez de plus amples informations sur les cookies ci-dessous, sous forme de Q&amp;A.</h5>
<h6>Qu’est-ce qu’un cookie?</h6>
<p>Un cookie est un petit fichier texte généré par le site internet que vous consultez et stocké dans le navigateur de votre ordinateur ou de votre appareil mobile – Smartphone, iPhone, iPad, etc. Un cookie contient un code qui ne peut être lu que par le serveur qui l’y a placé. Le serveur n’a donc pas accès aux autres informations qui se trouvent sur votre ordinateur ou votre appareil mobile.</p>
<h6>Comment est conçu un fichier cookie?</h6>
<p>Composition d’un fichier cookie:</p>
<ul><li>Le nom du serveur qui a généré le fichier cookie</li>
<li>La mention d’une date d’échéance</li>
<li>Un code chiffré unique</li>
</ul><h6>Quelle est l’utilité d’un cookie?</h6>
<p>Les cookies nous permettent d’optimiser au maximum votre expérience de surf en tant que visiteur de l’un de nos sites web. Notamment en vous permettant de naviguer plus vite et plus facilement entre les différentes rubriques du site web ou en adaptant le contenu de notre site à vos préférences personnelles, par exemple au niveau de la langue.</p>
<h6>Où puis-je retrouver ces cookies?</h6>
<p>Les cookies sont stockés dans un dossier à part du navigateur de votre ordinateur ou de votre appareil mobile.</p>
<h6>Qu’est-ce qu’un ‘Cookie de session’?</h6>
<p>Ce cookie a pour fonction de reconnaître votre navigateur pendant la durée de votre visite sur nos sites web.</p>
<h6>Qu’est-ce qu’un ‘Cookie permanent’?</h6>
<p>Ce cookie a pour fonction de reconnaître votre navigateur dans l’optique de visites récurrentes sur nos sites web.</p>
<h6>Quels cookies sont indispensables?</h6>
<p>Si vous désactivez les cookies indispensables, vous aurez l’impression que certaines parties de nos sites web de fonctionnent pas ou pas comme elles le devraient. Abesim utilise ce type de cookie lorsque vous complétez un formulaire ou pour pouvoir discuter sur ses blogs, par exemple. Abesim utilise les ‘cookies indispensables’ lorsque vous souhaitez vous identifier sur votre compte personnel. Ces cookies nous permettent de contrôler votre identité de manière sécurisée avant de permettre l’accès aux informations personnelles que vous avez communiquées.</p>
<h6>Qu’est-ce qu’un ‘Cookie de fonctionnalité’?</h6>
<p>Comme leur nom l’indique, ces cookies veillent au fonctionnement optimal de nos sites web de manière à vous garantir une navigation agréable et personnalisée. Abesim utilise les ‘cookies de fonctionnalité’ pour ‘mémoriser’ vos préférences personnelles et pour éviter la communication des mêmes informations en cas de visites récurrentes, par exemple dans le cas d’une participation à une action.</p>
<h6>Qu’est-ce qu’un ‘Cookie de performance’?</h6>
<p>Abesim utilise les ‘cookies de performance’ afin de recueillir des informations relatives à la façon dont vous utilisez nos sites web de manière à en adapter et en améliorer les contenus et la convivialité. Ces cookies retiennent par exemple le nombre de visiteurs par page ou la langue dans laquelle le site web est le plus souvent consulté.</p>
<h6>Qu’est-ce qu’un ‘Cookie de tierce partie’?</h6>
<p>Les cookies de tierce partie proviennent des publicités postées par des tiers sur les sites web de Abesim. Ils ont pour but d’adapter les publicités et/ou leur contenu à vos préférences personnelles. Ces cookies sont visibles uniquement si vous ne les avez pas désactivés. L’utilisation de cookies de tierce partie ne donne en aucun cas accès à vos informations personnelles, ni à Abesim ni aux annonceurs (les tiers).</p>
<h6>Qu’est-ce que le ‘Contenu intégré’?</h6>
<p><span style="font-size: 13.0080003738403px; line-height: 1.538em;">Les sites web de Abesim peuvent rediriger vers d’autres sites via un lien cliquable. Vous arrivez alors sur le site web d’une autre organisation. Il est possible que le site vers lequel vous avez été redirigé utilise également des cookies. Abesim vous conseille dès lors de consulter les conditions d’utilisation de l’organisation concernée, mentionnées sur son site web, et de vous informer sur sa politique en matière de vie privée et de cookies.</span></p>
<h6>Comment gérer les cookies?</h6>
<p>C’est vous qui assurez la gestion de vos cookies. Vous pouvez modifier les paramètres de votre navigateur en fonction de vos préférences personnelles. Vous pouvez à tout moment supprimer les cookies installés et refuser les nouveaux cookies en modifiant les paramètres de votre navigateur.</p>
<p>Le site web ci-dessous vous offre un aperçu des navigateurs les plus utilisés et vous guide dans le paramétrage de votre navigateur en fonction de vos préférences: <a href="http://www.aboutcookies.org/">http://www.aboutcookies.org/</a></p>
<p>Fin des conditions d\'utilisation.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_authors' => array(),
  'field_contact' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_contact_form' => array(),
  'field_contact_text' => array(),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'confidential' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'next_serial' => 1,
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_bar' => 1,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'status' => 1,
    'record_exists' => FALSE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(),
    'conditionals' => array(),
    'nid' => '143bc15f-dffe-4fb0-9602-57f48ab12de0',
  ),
  'menu_node_links' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-01-16 11:03:38 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Disclaimer',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '8d65da4b-200f-46da-8413-619c3b303d00',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'en',
  'created' => 1421402500,
  'tnid' => 16,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '17916c09-54c0-4af1-9141-c6ff04db816e',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h2>Gebruik van de O2 Agency website</h2>
<h2>1. Bescherming van de persoonlijke levenssfeer</h2>
<p>O2 AGENCY stelt uw interesse in haar activiteiten en uw bezoek aan haar website op prijs. Wij vinden het belangrijk dat u zich niet onzeker voelt bij het bezoeken van onze website en willen ervoor zorgen dat het duidelijk is wat er gebeurt met de persoonlijke gegevens die u aan ons ter beschikking stelt.</p>
<p>Uw persoonlijke gegevens, inclusief uw e-mail adres, zullen als volgt worden gebruikt:</p>
<p>informatie die u ons geeft, met als doel informatie van ons te verkrijgen, slaan we op om uw informatieaanvraag te kunnen uitvoeren<br>
	informatie die u ons geeft in het kader van een sollicitatie, slaan we op en behandelen we met dat doel voor ogen met uiterste zorgvuldigheid<br>
	de opgeslagen informatie zullen we ook aanwenden om via bezoekersanalyses onze website verder te optimaliseren<br>
	we zullen uw gegevens gebruiken om u in de toekomst over O2 AGENCY / Claerhout Communicatiehuis en haar producten/diensten op de hoogte te houden. Als u wenst dat uw gegevens hiervoor niet (meer) gebruikt worden, dan kan u ons dat melden<br>
	we zullen uw persoonlijke informatie niet ter beschikking stellen van of verkopen aan derden, die geen onderdeel of directe partner van O2 AGENCY zijn.<br>
	Onze website bevat links naar niet-O2 AGENCY websites. O2 AGENCY is niet verantwoordelijk voor de manier waarop in deze websites met de persoonlijke gegevens wordt omgegaan.</p>
<p>Alle verstrekte persoonlijke gegevens worden opgenomen in een bestand.</p>
<p>Houder: Claerhout Communicatiehuis – Sint Denijslaan 485 – 9000 Gent.<br>
	O2 AGENCY is een divisie van Claerhout nv Communicatiehuis – Sint Denijslaan 485 – 9000 Gent.</p>
<p>Deze gegevens zijn bestemd voor de promotie van producten en diensten van Claerhout nv Communicatiehuis. U hebt inzagerecht zoals voorzien in de wet van 8 december 1992 op de bescherming van de persoonlijke levenssfeer. Bijkomende inlichtingen: Openbaar Register (Commissie tot bescherming van de Persoonlijke Levenssfeer). U kan uw gegevens laten corrigeren of verwijderen uit het bestand op eenvoudig verzoek en na identificatie.</p>
<h2>2. Voorwaarden voor gebruik</h2>
<p>Het bezoeken, doorbladeren en bekijken van deze website valt onder onze gebruiksvoorwaarden en onder alle toepasselijke wetten. Door deze website te bezoeken, te doorbladeren en te bekijken, aanvaardt u de gebruiksvoorwaarden, zoals hieronder beschreven, zonder beperking of uitsluiting.</p>
<h2>3. Auteursrecht</h2>
<p>De inhoud van deze website is auteursrechtelijk beschermd. De auteursrechten berusten bij O2 AGENCY, haar klanten en haar partners. Alle rechten zijn voorbehouden. Informatie van de website (waaronder maar niet uitsluitend tekst, presentaties, illustraties, foto’s en geluid) mag, tenzij anders is aangegeven, niet worden gekopieerd, overgeplaatst, verspreid of opgeslagen zonder schriftelijke toestemming vooraf van O2 AGENCY. Wijzigingen op de inhoud van de site zijn verboden. Delen van de site bevatten illustraties die uitdrukkelijk onder het auteursrecht van de klanten vallen.</p>
<h2>4. Aansprakelijkheid</h2>
<p>Aan de informatie, die op deze website getoond wordt, kunnen op geen enkele wijze rechten of aanspraken ontleend worden. Links naar andere websites worden als service aangeboden en het betekent niet dat O2 AGENCY verantwoordelijk is voor de inhoud van deze websites. Bovendien is het uw eigen verantwoordelijkheid te controleren of deze websites vrij zijn van virussen en andere zaken met een schadelijk karakter. Informatie op onze website kan door ons worden gewijzigd zonder voorafgaande aankondiging of verplichting.</p>
<h2>5. Opmerkingen, vragen en suggesties</h2>
<p>O2 AGENCY wenst geen vertrouwelijke of voorbehouden informatie te ontvangen via deze website. Alle door u aan ons verstrekte informatie (suggesties, ideeën en overige) zal worden beschouwd als niet-vertrouwelijk en openbaar (uitgezonderd zoals beschreven in punt 1. met betrekking tot de bescherming van de persoonlijke levenssfeer). Door O2 AGENCY materiaal te sturen, geeft u aan O2 AGENCY het onbeperkte en onherroepbare recht deze informatie te gebruiken, te vertonen, te wijzigen, te verwerken en te verspreiden en deze informatie rechtelijk te registreren. Tevens kan O2 AGENCY de ideeën en technieken vrij toepassen die u ons laat toekomen. O2 AGENCY heeft deze website met de grootst mogelijke zorg samengesteld. O2 AGENCY houdt zich aanbevolen voor suggesties of commentaar. Indien bezwaar bestaat tegen bepaalde teksten of afbeeldingen, kan dat ook kenbaar worden gemaakt.</p>
<h2>6. Rechtspraak</h2>
<p>Het staat O2 AGENCY vrij op elk moment de gebruiksvoorwaarden te wijzigen door die opnieuw op deze website te publiceren. De gebruiksvoorwaarden zijn conform de Belgische rechtspraak en de geschillen zullen beslecht worden conform diezelfde rechtspraak. In het geval dat een onderdeel van deze gebruiksvoorwaarden door een rechtbank met toepasselijke jurisdictie ongeldig of onuitvoerbaar zal worden verklaard, zal het betreffende deel van de gebruiksvoorwaarden als vervallen beschouwd worden, terwijl de resterende bepalingen van deze gebruiksvoorwaarden in volle geldigheid en werking van kracht zullen blijven.</p>
<h2>7. Cookiebeleid</h2>
<p>Om onze websites beter af te kunnen stemmen op uw behoeften en voorkeuren, maakt O2 AGENCY gebruik van cookies. U heeft de mogelijkheid om de cookies te weigeren. In dat geval maken we u er attent op dat bepaalde onderdelen van onze websites niet naar behoren kunnen functioneren. Het kan ook zijn dat u geen toegang meer zal hebben tot bepaalde diensten die wij op onze website aanbieden.<br>
	Indien u uw cookie-instellingen niet wijzigt en u opteert om ‘verder te gaan’, dan gaat O2 AGENCY ervan uit dat u onze cookies aanvaardt.<br>
	Hieronder geven wij u graag meer informatie over cookies aan de hand van een eenvoudige Q&amp;A structuur.</p>
<h3>Wat is een cookie?</h3>
<p>Een cookie is een tekstbestand dat in de webbrowser van uw computer of uw mobiel toestel – zoals uw Smartphone, iPhone, iPad en dergelijke – nagelaten wordt door de server van de website die u op dat moment raadpleegt. Een cookie bevat een code die alleen gelezen kan worden door de server die het er geplaatst heeft. De server heeft dus geen toegang tot andere informatie die zich bevindt op uw computer of uw mobiel toestel.</p>
<h3>Hoe is een cookie bestand opgebouwd?</h3>
<p>Een cookiebestand bestaat uit:</p>
<ul>
	<li>de naam van de server die het cookie bestand geplaatst heeft</li>
	<li>er wordt een vervaldatum meegegeven</li>
	<li>een unieke cijfercode</li>
</ul>
<h3>Wat is het nut van een cookie?</h3>
<p>Aan de hand van cookies zorgen we ervoor dat uw surfervaring als bezoeker op één van onze websites zo optimaal mogelijk ervaren wordt. Dit onder andere om u sneller en makkelijker te laten navigeren tussen de verschillende onderdelen van de website of door het aanpassen van de inhoud van onze site aan uw persoonlijke voorkeuren bvb taalvoorkeur.</p>
<h3>Waar kan ik deze cookies terugvinden?</h3>
<p>Cookies worden in een afzonderlijke folder van uw browser op uw computer of uw mobiel toestel geplaatst.</p>
<h3>Wat is een ‘Session cookie’?</h3>
<p>Deze cookie heeft als functie om uw browser te herkennen gedurende het bezoek aan onze websites.</p>
<h3>Wat is een ‘Permanente cookie’?</h3>
<p>Deze cookie heeft als functie om uw browser te herkennen met het oog op herhaalde bezoeken aan onze websites.</p>
<h3>Welke cookies zijn noodzakelijk?</h3>
<p>U zal de indruk krijgen dat bepaalde onderdelen van onze websites niet of niet naar behoren functioneren indien u de noodzakelijke cookies uitschakelde. O2 AGENCY gebruikt dergelijke cookies bijvoorbeeld bij het invullen van contactformulieren of om mee te kunnen discussiëren op onze blogs. O2 AGENCY maakt gebruik van ‘noodzakelijke’ cookies wanneer u wenst in te loggen op uw persoonlijke account. Aan de hand van deze cookies kunnen wij op een veilige manier uw identiteit controleren om zo toegang te verlenen tot de persoonlijke informatie die u achterliet.</p>
<h3>Wat zijn ‘Functionele cookies’?</h3>
<p>Zoals het woord zelf suggereert, zorgen deze cookies voor het optimaal functioneren van onze websites zodat u een zo aangenaam en persoonlijk mogelijk bezoek aan onze websites ervaart. O2 AGENCY maakt gebruik van ‘Functionele cookies’ voor het ‘herinneren’ van uw persoonlijke voorkeuren en voor het vermijden van eenzelfde communicatie bij herhaalde bezoeken bijvoorbeeld bij het deelnemen aan een actie.</p>
<h3>Wat zijn ‘Performantie cookies’?</h3>
<p>O2 AGENCY maakt gebruik van ‘Performantie cookies’ om na te gaan hoe u onze websites gebruikt met het oog op het aanpassen en verbeteren van de inhoud en het gebruiksgemak van onze websites. Zo worden bijvoorbeeld het aantal bezoekers per pagina bijgehouden of de meest voorkomende taal waarin de website bezocht wordt.</p>
<h3>Wat zijn ‘Third Party cookies’?</h3>
<p>Dat zijn cookies die weggeschreven worden vanuit advertenties die door derden op de websites van O2 AGENCY vermeld worden. Dit met als doel om de advertenties en/of de inhoud van de advertenties aan uw persoonlijke voorkeuren aan te kunnen passen. U krijgt deze cookies uitsluitend te zien indien u deze niet uitschakelde. Bij het gebruik van third partie cookies beschikt noch O2 AGENCY, beschikken noch de adverteerders (derden) over uw persoonlijke gegevens.</p>
<h3>Wat is ‘Embedded content’?</h3>
<p>O2 AGENCY kan op haar websites doorverwijzen naar andere sites via een aanklikbare link. Zo komt u op een website van een andere organisatie terecht. Het kan zijn dat de website naar waar verwezen wordt ook gebruik maakt van cookies. O2 AGENCY adviseert u om op dat moment de gebruiksvoorwaarden van de betreffende organisatie te consulteren, vermeld op hun eigen website, om u te informeren omtrent hun privacy en cookie beleid.</p>
<h3>Hoe kan ik de cookies beheren?</h3>
<p>Het beheren van cookies heeft u zelf in de hand. U kan de instellingen van uw browser aanpassen naar uw persoonlijke voorkeuren. U kan steeds zowel reeds geïnstalleerde cookies verwijderen als nieuwe cookies weigeren door uw browserinstellingen aan te passen.<br>
	Onderstaande website geeft u een overzicht van de meest gebruikte browsers om u wegwijs te helpen bij het instellen van uw browservoorkeuren: http://www.aboutcookies.org/</p>
<p>Eind van deze gebruiksvoorwaarden.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<h2>Gebruik van de O2 Agency website</h2>
<h2>1. Bescherming van de persoonlijke levenssfeer</h2>
<p>O2 AGENCY stelt uw interesse in haar activiteiten en uw bezoek aan haar website op prijs. Wij vinden het belangrijk dat u zich niet onzeker voelt bij het bezoeken van onze website en willen ervoor zorgen dat het duidelijk is wat er gebeurt met de persoonlijke gegevens die u aan ons ter beschikking stelt.</p>
<p>Uw persoonlijke gegevens, inclusief uw e-mail adres, zullen als volgt worden gebruikt:</p>
<p>informatie die u ons geeft, met als doel informatie van ons te verkrijgen, slaan we op om uw informatieaanvraag te kunnen uitvoeren<br /><br />
	informatie die u ons geeft in het kader van een sollicitatie, slaan we op en behandelen we met dat doel voor ogen met uiterste zorgvuldigheid<br /><br />
	de opgeslagen informatie zullen we ook aanwenden om via bezoekersanalyses onze website verder te optimaliseren<br /><br />
	we zullen uw gegevens gebruiken om u in de toekomst over O2 AGENCY / Claerhout Communicatiehuis en haar producten/diensten op de hoogte te houden. Als u wenst dat uw gegevens hiervoor niet (meer) gebruikt worden, dan kan u ons dat melden<br /><br />
	we zullen uw persoonlijke informatie niet ter beschikking stellen van of verkopen aan derden, die geen onderdeel of directe partner van O2 AGENCY zijn.<br /><br />
	Onze website bevat links naar niet-O2 AGENCY websites. O2 AGENCY is niet verantwoordelijk voor de manier waarop in deze websites met de persoonlijke gegevens wordt omgegaan.</p>
<p>Alle verstrekte persoonlijke gegevens worden opgenomen in een bestand.</p>
<p>Houder: Claerhout Communicatiehuis – Sint Denijslaan 485 – 9000 Gent.<br /><br />
	O2 AGENCY is een divisie van Claerhout nv Communicatiehuis – Sint Denijslaan 485 – 9000 Gent.</p>
<p>Deze gegevens zijn bestemd voor de promotie van producten en diensten van Claerhout nv Communicatiehuis. U hebt inzagerecht zoals voorzien in de wet van 8 december 1992 op de bescherming van de persoonlijke levenssfeer. Bijkomende inlichtingen: Openbaar Register (Commissie tot bescherming van de Persoonlijke Levenssfeer). U kan uw gegevens laten corrigeren of verwijderen uit het bestand op eenvoudig verzoek en na identificatie.</p>
<h2>2. Voorwaarden voor gebruik</h2>
<p>Het bezoeken, doorbladeren en bekijken van deze website valt onder onze gebruiksvoorwaarden en onder alle toepasselijke wetten. Door deze website te bezoeken, te doorbladeren en te bekijken, aanvaardt u de gebruiksvoorwaarden, zoals hieronder beschreven, zonder beperking of uitsluiting.</p>
<h2>3. Auteursrecht</h2>
<p>De inhoud van deze website is auteursrechtelijk beschermd. De auteursrechten berusten bij O2 AGENCY, haar klanten en haar partners. Alle rechten zijn voorbehouden. Informatie van de website (waaronder maar niet uitsluitend tekst, presentaties, illustraties, foto’s en geluid) mag, tenzij anders is aangegeven, niet worden gekopieerd, overgeplaatst, verspreid of opgeslagen zonder schriftelijke toestemming vooraf van O2 AGENCY. Wijzigingen op de inhoud van de site zijn verboden. Delen van de site bevatten illustraties die uitdrukkelijk onder het auteursrecht van de klanten vallen.</p>
<h2>4. Aansprakelijkheid</h2>
<p>Aan de informatie, die op deze website getoond wordt, kunnen op geen enkele wijze rechten of aanspraken ontleend worden. Links naar andere websites worden als service aangeboden en het betekent niet dat O2 AGENCY verantwoordelijk is voor de inhoud van deze websites. Bovendien is het uw eigen verantwoordelijkheid te controleren of deze websites vrij zijn van virussen en andere zaken met een schadelijk karakter. Informatie op onze website kan door ons worden gewijzigd zonder voorafgaande aankondiging of verplichting.</p>
<h2>5. Opmerkingen, vragen en suggesties</h2>
<p>O2 AGENCY wenst geen vertrouwelijke of voorbehouden informatie te ontvangen via deze website. Alle door u aan ons verstrekte informatie (suggesties, ideeën en overige) zal worden beschouwd als niet-vertrouwelijk en openbaar (uitgezonderd zoals beschreven in punt 1. met betrekking tot de bescherming van de persoonlijke levenssfeer). Door O2 AGENCY materiaal te sturen, geeft u aan O2 AGENCY het onbeperkte en onherroepbare recht deze informatie te gebruiken, te vertonen, te wijzigen, te verwerken en te verspreiden en deze informatie rechtelijk te registreren. Tevens kan O2 AGENCY de ideeën en technieken vrij toepassen die u ons laat toekomen. O2 AGENCY heeft deze website met de grootst mogelijke zorg samengesteld. O2 AGENCY houdt zich aanbevolen voor suggesties of commentaar. Indien bezwaar bestaat tegen bepaalde teksten of afbeeldingen, kan dat ook kenbaar worden gemaakt.</p>
<h2>6. Rechtspraak</h2>
<p>Het staat O2 AGENCY vrij op elk moment de gebruiksvoorwaarden te wijzigen door die opnieuw op deze website te publiceren. De gebruiksvoorwaarden zijn conform de Belgische rechtspraak en de geschillen zullen beslecht worden conform diezelfde rechtspraak. In het geval dat een onderdeel van deze gebruiksvoorwaarden door een rechtbank met toepasselijke jurisdictie ongeldig of onuitvoerbaar zal worden verklaard, zal het betreffende deel van de gebruiksvoorwaarden als vervallen beschouwd worden, terwijl de resterende bepalingen van deze gebruiksvoorwaarden in volle geldigheid en werking van kracht zullen blijven.</p>
<h2>7. Cookiebeleid</h2>
<p>Om onze websites beter af te kunnen stemmen op uw behoeften en voorkeuren, maakt O2 AGENCY gebruik van cookies. U heeft de mogelijkheid om de cookies te weigeren. In dat geval maken we u er attent op dat bepaalde onderdelen van onze websites niet naar behoren kunnen functioneren. Het kan ook zijn dat u geen toegang meer zal hebben tot bepaalde diensten die wij op onze website aanbieden.<br /><br />
	Indien u uw cookie-instellingen niet wijzigt en u opteert om ‘verder te gaan’, dan gaat O2 AGENCY ervan uit dat u onze cookies aanvaardt.<br /><br />
	Hieronder geven wij u graag meer informatie over cookies aan de hand van een eenvoudige Q&amp;A structuur.</p>
<h3>Wat is een cookie?</h3>
<p>Een cookie is een tekstbestand dat in de webbrowser van uw computer of uw mobiel toestel – zoals uw Smartphone, iPhone, iPad en dergelijke – nagelaten wordt door de server van de website die u op dat moment raadpleegt. Een cookie bevat een code die alleen gelezen kan worden door de server die het er geplaatst heeft. De server heeft dus geen toegang tot andere informatie die zich bevindt op uw computer of uw mobiel toestel.</p>
<h3>Hoe is een cookie bestand opgebouwd?</h3>
<p>Een cookiebestand bestaat uit:</p>
<ul><li>de naam van de server die het cookie bestand geplaatst heeft</li>
<li>er wordt een vervaldatum meegegeven</li>
<li>een unieke cijfercode</li>
</ul><h3>Wat is het nut van een cookie?</h3>
<p>Aan de hand van cookies zorgen we ervoor dat uw surfervaring als bezoeker op één van onze websites zo optimaal mogelijk ervaren wordt. Dit onder andere om u sneller en makkelijker te laten navigeren tussen de verschillende onderdelen van de website of door het aanpassen van de inhoud van onze site aan uw persoonlijke voorkeuren bvb taalvoorkeur.</p>
<h3>Waar kan ik deze cookies terugvinden?</h3>
<p>Cookies worden in een afzonderlijke folder van uw browser op uw computer of uw mobiel toestel geplaatst.</p>
<h3>Wat is een ‘Session cookie’?</h3>
<p>Deze cookie heeft als functie om uw browser te herkennen gedurende het bezoek aan onze websites.</p>
<h3>Wat is een ‘Permanente cookie’?</h3>
<p>Deze cookie heeft als functie om uw browser te herkennen met het oog op herhaalde bezoeken aan onze websites.</p>
<h3>Welke cookies zijn noodzakelijk?</h3>
<p>U zal de indruk krijgen dat bepaalde onderdelen van onze websites niet of niet naar behoren functioneren indien u de noodzakelijke cookies uitschakelde. O2 AGENCY gebruikt dergelijke cookies bijvoorbeeld bij het invullen van contactformulieren of om mee te kunnen discussiëren op onze blogs. O2 AGENCY maakt gebruik van ‘noodzakelijke’ cookies wanneer u wenst in te loggen op uw persoonlijke account. Aan de hand van deze cookies kunnen wij op een veilige manier uw identiteit controleren om zo toegang te verlenen tot de persoonlijke informatie die u achterliet.</p>
<h3>Wat zijn ‘Functionele cookies’?</h3>
<p>Zoals het woord zelf suggereert, zorgen deze cookies voor het optimaal functioneren van onze websites zodat u een zo aangenaam en persoonlijk mogelijk bezoek aan onze websites ervaart. O2 AGENCY maakt gebruik van ‘Functionele cookies’ voor het ‘herinneren’ van uw persoonlijke voorkeuren en voor het vermijden van eenzelfde communicatie bij herhaalde bezoeken bijvoorbeeld bij het deelnemen aan een actie.</p>
<h3>Wat zijn ‘Performantie cookies’?</h3>
<p>O2 AGENCY maakt gebruik van ‘Performantie cookies’ om na te gaan hoe u onze websites gebruikt met het oog op het aanpassen en verbeteren van de inhoud en het gebruiksgemak van onze websites. Zo worden bijvoorbeeld het aantal bezoekers per pagina bijgehouden of de meest voorkomende taal waarin de website bezocht wordt.</p>
<h3>Wat zijn ‘Third Party cookies’?</h3>
<p>Dat zijn cookies die weggeschreven worden vanuit advertenties die door derden op de websites van O2 AGENCY vermeld worden. Dit met als doel om de advertenties en/of de inhoud van de advertenties aan uw persoonlijke voorkeuren aan te kunnen passen. U krijgt deze cookies uitsluitend te zien indien u deze niet uitschakelde. Bij het gebruik van third partie cookies beschikt noch O2 AGENCY, beschikken noch de adverteerders (derden) over uw persoonlijke gegevens.</p>
<h3>Wat is ‘Embedded content’?</h3>
<p>O2 AGENCY kan op haar websites doorverwijzen naar andere sites via een aanklikbare link. Zo komt u op een website van een andere organisatie terecht. Het kan zijn dat de website naar waar verwezen wordt ook gebruik maakt van cookies. O2 AGENCY adviseert u om op dat moment de gebruiksvoorwaarden van de betreffende organisatie te consulteren, vermeld op hun eigen website, om u te informeren omtrent hun privacy en cookie beleid.</p>
<h3>Hoe kan ik de cookies beheren?</h3>
<p>Het beheren van cookies heeft u zelf in de hand. U kan de instellingen van uw browser aanpassen naar uw persoonlijke voorkeuren. U kan steeds zowel reeds geïnstalleerde cookies verwijderen als nieuwe cookies weigeren door uw browserinstellingen aan te passen.<br /><br />
	Onderstaande website geeft u een overzicht van de meest gebruikte browsers om u wegwijs te helpen bij het instellen van uw browservoorkeuren: <a href="http://www.aboutcookies.org/">http://www.aboutcookies.org/</a></p>
<p>Eind van deze gebruiksvoorwaarden.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_authors' => array(),
  'field_contact' => array(),
  'field_contact_form' => array(),
  'field_contact_text' => array(),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'nid' => '17916c09-54c0-4af1-9141-c6ff04db816e',
    'next_serial' => 1,
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'confidential' => 0,
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(),
    'conditionals' => array(),
  ),
  'menu_node_links' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-01-16 11:01:40 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Milieu',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '86913cd8-ac60-48a0-bae8-5ca7e1ed1b9b',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'nl',
  'created' => 1427299596,
  'tnid' => 7,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '17d82f40-0221-4485-b249-378a9ca8b631',
  'revision_uid' => 1,
  'body' => array(),
  'field_authors' => array(),
  'field_contact' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_contact_form' => array(),
  'field_contact_text' => array(),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'confidential' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'next_serial' => 1,
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_bar' => 1,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'status' => 1,
    'record_exists' => FALSE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(),
    'conditionals' => array(),
    'nid' => '17d82f40-0221-4485-b249-378a9ca8b631',
  ),
  'menu_node_links' => array(
    481 => array(
      'menu_name' => 'main-menu',
      'mlid' => 481,
      'plid' => 478,
      'link_path' => 'node/7',
      'router_path' => 'node/%',
      'link_title' => 'Milieu',
      'options' => 'a:2:{s:9:"node_type";s:4:"page";s:5:"alter";b:1;}',
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 1,
      'expanded' => 0,
      'weight' => -50,
      'depth' => 3,
      'customized' => 1,
      'p1' => 468,
      'p2' => 478,
      'p3' => 481,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'uuid' => 'f825db79-ecbc-454e-ae30-a6119a4cd920',
      'language' => 'und',
      'i18n_tsid' => 0,
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-03-25 17:06:36 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Page not found',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '49b4e9b3-fc99-4c42-a8f6-06cc7680ad7f',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'en',
  'created' => 1421402518,
  'tnid' => 2,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '254db7e5-86d3-4f8f-9a0b-6aea0cc24941',
  'revision_uid' => 1,
  'body' => array(),
  'field_authors' => array(),
  'field_contact' => array(),
  'field_contact_form' => array(),
  'field_contact_text' => array(),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'nid' => '254db7e5-86d3-4f8f-9a0b-6aea0cc24941',
    'next_serial' => 1,
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'confidential' => 0,
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(),
    'conditionals' => array(),
  ),
  'menu_node_links' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-01-16 11:01:58 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Onze diensten',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '83a65d39-74b3-4ae0-9320-04cbf3b16f70',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'nl',
  'created' => 1427297464,
  'tnid' => 9,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '286cc568-97db-42a4-990e-055a9ca4e5fa',
  'revision_uid' => 1,
  'body' => array(),
  'field_authors' => array(
    'und' => array(
      0 => array(
        'target_id' => 111,
      ),
      1 => array(
        'target_id' => 110,
      ),
      2 => array(
        'target_id' => 109,
      ),
      3 => array(
        'target_id' => 108,
      ),
      4 => array(
        'target_id' => 107,
      ),
      5 => array(
        'target_id' => 106,
      ),
      6 => array(
        'target_id' => 105,
      ),
      7 => array(
        'target_id' => 104,
      ),
      8 => array(
        'target_id' => 103,
      ),
      9 => array(
        'target_id' => 102,
      ),
      10 => array(
        'target_id' => 101,
      ),
      11 => array(
        'target_id' => 100,
      ),
      12 => array(
        'target_id' => 99,
      ),
      13 => array(
        'target_id' => 98,
      ),
      14 => array(
        'target_id' => 97,
      ),
      15 => array(
        'target_id' => 96,
      ),
      16 => array(
        'target_id' => 95,
      ),
      17 => array(
        'target_id' => 94,
      ),
      18 => array(
        'target_id' => 56,
      ),
      19 => array(
        'target_id' => 84,
      ),
      20 => array(
        'target_id' => 85,
      ),
    ),
  ),
  'field_contact' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_contact_form' => array(
    'und' => array(
      0 => array(
        'target_id' => 32,
      ),
    ),
  ),
  'field_contact_text' => array(
    'und' => array(
      0 => array(
        'value' => '<p><em>Meer info?</em></p>
<p>Stuur een <strong>bericht via het contactformulier</strong></p>
<p>of neem persoonlijk contact op via één van onze adressen.</p>
<p>We helpen u graag verder.</p>
',
        'format' => 'full_html',
        'safe_value' => '<p><em>Meer info?</em></p>
<p>Stuur een <strong>bericht via het contactformulier</strong></p>
<p>of neem persoonlijk contact op via één van onze adressen.</p>
<p>We helpen u graag verder.</p>
',
      ),
    ),
  ),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'confidential' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'next_serial' => 1,
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_bar' => 1,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'status' => 1,
    'record_exists' => FALSE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(),
    'conditionals' => array(),
    'nid' => '286cc568-97db-42a4-990e-055a9ca4e5fa',
  ),
  'menu_node_links' => array(
    468 => array(
      'menu_name' => 'main-menu',
      'mlid' => 468,
      'plid' => 0,
      'link_path' => 'node/9',
      'router_path' => 'node/%',
      'link_title' => 'Onze diensten',
      'options' => 'a:3:{s:10:"attributes";a:0:{}s:5:"alter";b:1;s:9:"node_type";s:4:"page";}',
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 1,
      'expanded' => 1,
      'weight' => -49,
      'depth' => 1,
      'customized' => 1,
      'p1' => 468,
      'p2' => 0,
      'p3' => 0,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'uuid' => 'f5fcc12a-a02e-4928-aca2-6d4c1aa9637c',
      'language' => 'nl',
      'i18n_tsid' => 0,
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-03-25 16:31:04 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'News',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c36eb78a-a37b-4b45-a297-92de469ae888',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'en',
  'created' => 1427201947,
  'tnid' => 5,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '2bfe8fbe-b0c0-4b72-b8fe-74069050baf3',
  'revision_uid' => 1,
  'body' => array(),
  'field_authors' => array(),
  'field_contact' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_contact_form' => array(),
  'field_contact_text' => array(),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'confidential' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'next_serial' => 1,
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_bar' => 1,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'status' => 1,
    'record_exists' => FALSE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(),
    'conditionals' => array(),
    'nid' => '2bfe8fbe-b0c0-4b72-b8fe-74069050baf3',
  ),
  'menu_node_links' => array(
    472 => array(
      'menu_name' => 'main-menu',
      'mlid' => 472,
      'plid' => 0,
      'link_path' => 'node/10',
      'router_path' => 'node/%',
      'link_title' => 'News',
      'options' => 'a:3:{s:10:"attributes";a:0:{}s:5:"alter";b:1;s:9:"node_type";s:4:"page";}',
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => -41,
      'depth' => 1,
      'customized' => 1,
      'p1' => 472,
      'p2' => 0,
      'p3' => 0,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'uuid' => '3fe43720-34cc-4973-9b89-44e01396e357',
      'language' => 'en',
      'i18n_tsid' => 0,
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-03-24 13:59:07 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Accès refusé',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '589a5514-1ae6-4335-8d9e-fcc4ce98353f',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'fr',
  'created' => 1421402645,
  'tnid' => 2,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '3fcbe99c-f439-4eb2-9a32-90ab6a8d7ad4',
  'revision_uid' => 1,
  'body' => array(),
  'field_authors' => array(),
  'field_contact' => array(),
  'field_contact_form' => array(),
  'field_contact_text' => array(),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'nid' => '3fcbe99c-f439-4eb2-9a32-90ab6a8d7ad4',
    'next_serial' => 1,
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'confidential' => 0,
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(),
    'conditionals' => array(),
  ),
  'menu_node_links' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-01-16 11:04:05 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Pagina niet gevonden',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '0826c10a-ef5b-4d68-a37a-ee401d18b9d2',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'nl',
  'created' => 1418283421,
  'tnid' => 2,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '43f5d8b3-e780-4521-9756-cd90b20fd06d',
  'revision_uid' => 1,
  'body' => array(),
  'field_authors' => array(),
  'field_contact' => array(),
  'field_contact_form' => array(),
  'field_contact_text' => array(),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'nid' => '43f5d8b3-e780-4521-9756-cd90b20fd06d',
    'next_serial' => 1,
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'confidential' => 0,
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(),
    'conditionals' => array(),
  ),
  'menu_node_links' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-12-11 08:37:01 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Werkwijze & visie',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'edf559aa-2b7d-4326-81f7-9fffb0c4c557',
  'ds_switch' => '',
  'type' => 'block',
  'language' => 'nl',
  'created' => 1427212284,
  'tnid' => 14,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '4a564f7b-1a09-4a17-9600-b4a1e12e7129',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Diagnostiek en management.</p>
<p><a href="/nl/node/39">[[{"fid":"42","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"Werkwijze &amp; visie","field_file_image_title_text[und][0][value]":"Werkwijze &amp; visie"},"type":"media","link_text":null,"attributes":{"alt":"Werkwijze &amp; visie","title":"Werkwijze &amp; visie","class":"media-element file-default"}}]]</a></p>
<p><a class="more" href="/nl/node/39">Lees meer</a></p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Diagnostiek en management.</p>
<p><a href="/nl/node/39"><img alt="Werkwijze &amp;amp; visie" title="Werkwijze &amp;amp; visie" class="media-element file-default" typeof="foaf:Image" src="http://default/sites/default/files/a2.jpg" /></a></p>
<p><a class="more" href="/nl/node/39">Lees meer</a></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'menu_node_links' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-03-24 16:51:24 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Doormat left NL',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'ddf2a719-6430-4f0f-b1c1-59bf795d6493',
  'ds_switch' => '',
  'type' => 'block',
  'language' => 'nl',
  'created' => 1427298274,
  'tnid' => 15,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '550a1eeb-216a-44cf-8282-e073e382f570',
  'revision_uid' => 23,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>[[{"fid":"6","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"","field_file_image_title_text[und][0][value]":""},"type":"media","link_text":null,"attributes":{"class":"media-element file-default"}}]]</p>
<p><a href="mailto:info@abesim.com">info@abesim.com</a></p>
<div class="section-location">
	<p><strong>Abesim bvba Deinze</strong></p>
	<p>Europalaan 26</p>
	<p>B-9800 Deinze</p>
	<p><span class="tel">+32(0)9 248 03 5</span></p>
</div>
<div class="section-location">
	<p><strong>Abesim bvba Antwerpen</strong></p>
	<p>Brusselstraat 51</p>
	<p>B-2018 Antwerpen</p>
	<p><span class="tel">+32(0)3 270 16 02</span></p>
	<p>&nbsp;</p>
	<p>BE 0467.209.111</p>
</div>
<p><a href="/nl/node/88"><strong>Andere locaties</strong></a></p>
<p><a class="linkedin" href="http://www.linkedin.com" target="_blank">&nbsp;</a> <a class="facebook" href="http://www.facebook.com" target="_blank">&nbsp;</a> <a class="twitter" href="http://www.twitter.com" target="_blank">&nbsp;</a></p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p><img class="media-element file-default" typeof="foaf:Image" src="http://default/sites/default/files/abesim.png" alt="" /></p>
<p><a href="mailto:info@abesim.com">info@abesim.com</a></p>
<div class="section-location">
<p><strong>Abesim bvba Deinze</strong></p>
<p>Europalaan 26</p>
<p>B-9800 Deinze</p>
<p><span class="tel">+32(0)9 248 03 5</span></p>
</div>
<div class="section-location">
<p><strong>Abesim bvba Antwerpen</strong></p>
<p>Brusselstraat 51</p>
<p>B-2018 Antwerpen</p>
<p><span class="tel">+32(0)3 270 16 02</span></p>
<p> </p>
<p>BE 0467.209.111</p>
</div>
<p><a href="/nl/node/88"><strong>Andere locaties</strong></a></p>
<p><a class="linkedin" href="http://www.linkedin.com" target="_blank"> </a> <a class="facebook" href="http://www.facebook.com" target="_blank"> </a> <a class="twitter" href="http://www.twitter.com" target="_blank"> </a></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'menu_node_links' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-03-25 16:44:34 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Disclaimer',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'ba8a1d0f-2721-474c-b1d1-060718247965',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'nl',
  'created' => 1418903296,
  'tnid' => 16,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '59456832-874f-4977-84bc-c5535d10f316',
  'revision_uid' => 23,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h2>Gebruik van de Abesim website</h2>
<h4>1. Bescherming van de persoonlijke levenssfeer</h4>
<p>Abesim stelt uw interesse in haar activiteiten en uw bezoek aan haar website op prijs. Wij vinden het belangrijk dat u zich niet onzeker voelt bij het bezoeken van onze website en willen ervoor zorgen dat het duidelijk is wat er gebeurt met de persoonlijke gegevens die u aan ons ter beschikking stelt.</p>
<p>Uw persoonlijke gegevens, inclusief uw e-mail adres, zullen als volgt worden gebruikt:</p>
<ul>
	<li>Informatie die u ons geeft, met als doel informatie van ons te verkrijgen, slaan we op om uw informatieaanvraag te kunnen uitvoeren.</li>
	<li>Informatie die u ons geeft in het kader van een sollicitatie, slaan we op en behandelen we met dat doel voor ogen met uiterste zorgvuldigheid.</li>
	<li>De opgeslagen informatie zullen we ook aanwenden om via bezoekersanalyses onze website verder te optimaliseren.</li>
	<li>We zullen uw gegevens gebruiken om u in de toekomst over Abesim en haar producten/diensten op de hoogte te houden. Als u wenst dat uw gegevens hiervoor niet (meer) gebruikt worden, dan kan u ons dat melden.</li>
	<li>We zullen uw persoonlijke informatie niet ter beschikking stellen van of verkopen aan derden, die geen onderdeel of directe partner van Abesim zijn.</li>
</ul>
<p>Onze website bevat links naar niet-Abesim websites. Abesim is niet verantwoordelijk voor de manier waarop in deze websites met de persoonlijke gegevens wordt omgegaan.</p>
<p>Alle verstrekte persoonlijke gegevens worden opgenomen in een bestand.</p>
<p>Houder: Abesim bvba, 62, Rue Provinciale, B-1301 Wavre<!--, België</p--></p>
<p>Deze gegevens zijn bestemd voor de promotie van producten en diensten van Abesim. U hebt inzagerecht zoals voorzien in de wet van 8 december 1992 op de bescherming van de persoonlijke levenssfeer. Bijkomende inlichtingen: Openbaar Register (Commissie tot bescherming van de Persoonlijke Levenssfeer). U kan uw gegevens laten corrigeren of verwijderen uit het bestand op eenvoudig verzoek en na identificatie.</p>
<h4>2. Voorwaarden voor gebruik</h4>
<p>Het bezoeken, doorbladeren en bekijken van deze website valt onder onze gebruiksvoorwaarden en onder alle toepasselijke wetten. Door deze website te bezoeken, te doorbladeren en te bekijken, aanvaardt u de gebruiksvoorwaarden, zoals hieronder beschreven, zonder beperking of uitsluiting.</p>
<h4>3. Auteursrecht</h4>
<p>De inhoud van deze website is auteursrechtelijk beschermd. De auteursrechten berusten bij Abesim, haar klanten en haar partners. Alle rechten zijn voorbehouden. Informatie van de website (waaronder maar niet uitsluitend tekst, presentaties, illustraties, foto’s en geluid) mag, tenzij anders is aangegeven, niet worden gekopieerd, overgeplaatst, verspreid of opgeslagen zonder schriftelijke toestemming vooraf van Abesim. Wijzigingen op de inhoud van de site zijn verboden. Delen van de site bevatten illustraties die uitdrukkelijk onder het auteursrecht van de klanten vallen.</p>
<h4>4. Aansprakelijkheid</h4>
<p>Aan de informatie, die op deze website getoond wordt, kunnen op geen enkele wijze rechten of aanspraken ontleend worden. Links naar andere websites worden als service aangeboden en het betekent niet dat Abesim verantwoordelijk is voor de inhoud van deze websites. Bovendien is het uw eigen verantwoordelijkheid te controleren of deze websites vrij zijn van virussen en andere zaken met een schadelijk karakter. Informatie op onze website kan door ons worden gewijzigd zonder voorafgaande aankondiging of verplichting.</p>
<h4>5. Opmerkingen, vragen en suggesties</h4>
<p>Abesim wenst geen vertrouwelijke of voorbehouden informatie te ontvangen via deze website. Alle door u aan ons verstrekte informatie (suggesties, ideeën en overige) zal worden beschouwd als niet-vertrouwelijk en openbaar (uitgezonderd zoals beschreven in punt 1. met betrekking tot de bescherming van de persoonlijke levenssfeer). Door Abesim materiaal te sturen, geeft u aan Abesim het onbeperkte en onherroepbare recht deze informatie te gebruiken, te vertonen, te wijzigen, te verwerken en te verspreiden en deze informatie rechtelijk te registreren. Tevens kan Abesim de ideeën en technieken vrij toepassen die u ons laat toekomen. Abesim heeft deze website met de grootst mogelijke zorg samengesteld. Abesim houdt zich aanbevolen voor suggesties of commentaar. Indien bezwaar bestaat tegen bepaalde teksten of afbeeldingen, kan dat ook kenbaar worden gemaakt.</p>
<h4>6. Rechtspraak</h4>
<p>Het staat Abesim vrij op elk moment de gebruiksvoorwaarden te wijzigen door die opnieuw op deze website te publiceren. De gebruiksvoorwaarden zijn conform de Belgische rechtspraak en de geschillen zullen beslecht worden conform diezelfde rechtspraak. In het geval dat een onderdeel van deze gebruiksvoorwaarden door een rechtbank met toepasselijke jurisdictie ongeldig of onuitvoerbaar zal worden verklaard, zal het betreffende deel van de gebruiksvoorwaarden als vervallen beschouwd worden, terwijl de resterende bepalingen van deze gebruiksvoorwaarden in volle geldigheid en werking van kracht zullen blijven.</p>
<h4>7. Cookiebeleid</h4>
<p>Om onze websites beter af te kunnen stemmen op uw behoeften en voorkeuren, maakt Abesim gebruik van cookies. U heeft de mogelijkheid om de cookies te weigeren. In dat geval maken we u er attent op dat bepaalde onderdelen van onze websites niet naar behoren kunnen functioneren. Het kan ook zijn dat u geen toegang meer zal hebben tot bepaalde diensten die wij op onze website aanbieden.</p>
<p>Indien u uw cookie-instellingen niet wijzigt en u opteert om ‘verder te gaan’, dan gaat Abesim ervan uit dat u onze cookies aanvaardt.</p>
<h5>Hieronder geven wij u graag meer informatie over cookies aan de hand van een eenvoudige Q&amp;A structuur.</h5>
<h6>Wat is een cookie?</h6>
<p>Een cookie is een tekstbestand dat in de webbrowser van uw computer of uw mobiel toestel – zoals uw Smartphone, iPhone, iPad en dergelijke – nagelaten wordt door de server van de website die u op dat moment raadpleegt. Een cookie bevat een code die alleen gelezen kan worden door de server die het er geplaatst heeft. De server heeft dus geen toegang tot andere informatie die zich bevindt op uw computer of uw mobiel toestel.</p>
<h6>Hoe is een cookie bestand opgebouwd?</h6>
<p>Een cookiebestand bestaat uit:</p>
<ul>
	<li>de naam van de server die het cookie bestand geplaatst heeft</li>
	<li>er wordt een vervaldatum meegegeven</li>
	<li>een unieke cijfercode</li>
</ul>
<h6>Wat is het nut van een cookie?</h6>
<p>Aan de hand van cookies zorgen we ervoor dat uw surfervaring als bezoeker op één van onze websites zo optimaal mogelijk ervaren wordt. Dit onder andere om u sneller en makkelijker te laten navigeren tussen de verschillende onderdelen van de website of door het aanpassen van de inhoud van onze site aan uw persoonlijke voorkeuren bvb taalvoorkeur.</p>
<h6>Waar kan ik deze cookies terugvinden?</h6>
<p>Cookies worden in een afzonderlijke folder van uw browser op uw computer of uw mobiel toestel geplaatst.</p>
<h6>Wat is een ‘Session cookie’?</h6>
<p>Deze cookie heeft als functie om uw browser te herkennen gedurende het bezoek aan onze websites.</p>
<h6>Wat is een ‘Permanente cookie’?</h6>
<p>Deze cookie heeft als functie om uw browser te herkennen met het oog op herhaalde bezoeken aan onze websites.</p>
<h6>Welke cookies zijn noodzakelijk?</h6>
<p>U zal de indruk krijgen dat bepaalde onderdelen van onze websites niet of niet naar behoren functioneren indien u de noodzakelijke cookies uitschakelde. Abesim gebruikt dergelijke cookies bijvoorbeeld bij het invullen van contactformulieren of om mee te kunnen discussiëren op onze blogs. Abesim maakt gebruik van ‘noodzakelijke’ cookies wanneer u wenst in te loggen op uw persoonlijke account. Aan de hand van deze cookies kunnen wij op een veilige manier uw identiteit controleren om zo toegang te verlenen tot de persoonlijke informatie die u achterliet.</p>
<h6>Wat zijn ‘Functionele cookies’?</h6>
<p>Zoals het woord zelf suggereert, zorgen deze cookies voor het optimaal functioneren van onze websites zodat u een zo aangenaam en persoonlijk mogelijk bezoek aan onze websites ervaart. Abesim maakt gebruik van ‘Functionele cookies’ voor het ‘herinneren’ van uw persoonlijke voorkeuren en voor het vermijden van eenzelfde communicatie bij herhaalde bezoeken bijvoorbeeld bij het deelnemen aan een actie.</p>
<h6>Wat zijn ‘Performantie cookies’?</h6>
<p>Abesim maakt gebruik van ‘Performantie cookies’ om na te gaan hoe u onze websites gebruikt met het oog op het aanpassen en verbeteren van de inhoud en het gebruiksgemak van onze websites. Zo worden bijvoorbeeld het aantal bezoekers per pagina bijgehouden of de meest voorkomende taal waarin de website bezocht wordt.</p>
<h6>Wat zijn ‘Third Party cookies’?</h6>
<p>Dat zijn cookies die weggeschreven worden vanuit advertenties die door derden op de websites van Abesim vermeld worden. Dit met als doel om de advertenties en/of de inhoud van de advertenties aan uw persoonlijke voorkeuren aan te kunnen passen. U krijgt deze cookies uitsluitend te zien indien u deze niet uitschakelde. Bij het gebruik van third partie cookies beschikt noch Abesim, beschikken noch de adverteerders (derden) over uw persoonlijke gegevens.</p>
<h6>Wat is ‘Embedded content’?</h6>
<p>Abesim kan op haar websites doorverwijzen naar andere sites via een aanklikbare link. Zo komt u op een website van een andere organisatie terecht. Het kan zijn dat de website naar waar verwezen wordt ook gebruik maakt van cookies. Abesim adviseert u om op dat moment de gebruiksvoorwaarden van de betreffende organisatie te consulteren, vermeld op hun eigen website, om u te informeren omtrent hun privacy en cookie beleid.</p>
<h6>Hoe kan ik de cookies beheren?</h6>
<p>Het beheren van cookies heeft u zelf in de hand. U kan de instellingen van uw browser aanpassen naar uw persoonlijke voorkeuren. U kan steeds zowel reeds geïnstalleerde cookies verwijderen als nieuwe cookies weigeren door uw browserinstellingen aan te passen.</p>
<p>Onderstaande website geeft u een overzicht van de meest gebruikte browsers om u wegwijs te helpen bij het instellen van uw browservoorkeuren: http://www.aboutcookies.org/</p>
<p>Eind van deze gebruiksvoorwaarden.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<h2>Gebruik van de Abesim website</h2>
<h4>1. Bescherming van de persoonlijke levenssfeer</h4>
<p>Abesim stelt uw interesse in haar activiteiten en uw bezoek aan haar website op prijs. Wij vinden het belangrijk dat u zich niet onzeker voelt bij het bezoeken van onze website en willen ervoor zorgen dat het duidelijk is wat er gebeurt met de persoonlijke gegevens die u aan ons ter beschikking stelt.</p>
<p>Uw persoonlijke gegevens, inclusief uw e-mail adres, zullen als volgt worden gebruikt:</p>
<ul><li>Informatie die u ons geeft, met als doel informatie van ons te verkrijgen, slaan we op om uw informatieaanvraag te kunnen uitvoeren.</li>
<li>Informatie die u ons geeft in het kader van een sollicitatie, slaan we op en behandelen we met dat doel voor ogen met uiterste zorgvuldigheid.</li>
<li>De opgeslagen informatie zullen we ook aanwenden om via bezoekersanalyses onze website verder te optimaliseren.</li>
<li>We zullen uw gegevens gebruiken om u in de toekomst over Abesim en haar producten/diensten op de hoogte te houden. Als u wenst dat uw gegevens hiervoor niet (meer) gebruikt worden, dan kan u ons dat melden.</li>
<li>We zullen uw persoonlijke informatie niet ter beschikking stellen van of verkopen aan derden, die geen onderdeel of directe partner van Abesim zijn.</li>
</ul><p>Onze website bevat links naar niet-Abesim websites. Abesim is niet verantwoordelijk voor de manier waarop in deze websites met de persoonlijke gegevens wordt omgegaan.</p>
<p>Alle verstrekte persoonlijke gegevens worden opgenomen in een bestand.</p>
<p>Houder: Abesim bvba, 62, Rue Provinciale, B-1301 Wavre</p>
<!--, België</p-->
<p>Deze gegevens zijn bestemd voor de promotie van producten en diensten van Abesim. U hebt inzagerecht zoals voorzien in de wet van 8 december 1992 op de bescherming van de persoonlijke levenssfeer. Bijkomende inlichtingen: Openbaar Register (Commissie tot bescherming van de Persoonlijke Levenssfeer). U kan uw gegevens laten corrigeren of verwijderen uit het bestand op eenvoudig verzoek en na identificatie.</p>
<h4>2. Voorwaarden voor gebruik</h4>
<p>Het bezoeken, doorbladeren en bekijken van deze website valt onder onze gebruiksvoorwaarden en onder alle toepasselijke wetten. Door deze website te bezoeken, te doorbladeren en te bekijken, aanvaardt u de gebruiksvoorwaarden, zoals hieronder beschreven, zonder beperking of uitsluiting.</p>
<h4>3. Auteursrecht</h4>
<p>De inhoud van deze website is auteursrechtelijk beschermd. De auteursrechten berusten bij Abesim, haar klanten en haar partners. Alle rechten zijn voorbehouden. Informatie van de website (waaronder maar niet uitsluitend tekst, presentaties, illustraties, foto’s en geluid) mag, tenzij anders is aangegeven, niet worden gekopieerd, overgeplaatst, verspreid of opgeslagen zonder schriftelijke toestemming vooraf van Abesim. Wijzigingen op de inhoud van de site zijn verboden. Delen van de site bevatten illustraties die uitdrukkelijk onder het auteursrecht van de klanten vallen.</p>
<h4>4. Aansprakelijkheid</h4>
<p>Aan de informatie, die op deze website getoond wordt, kunnen op geen enkele wijze rechten of aanspraken ontleend worden. Links naar andere websites worden als service aangeboden en het betekent niet dat Abesim verantwoordelijk is voor de inhoud van deze websites. Bovendien is het uw eigen verantwoordelijkheid te controleren of deze websites vrij zijn van virussen en andere zaken met een schadelijk karakter. Informatie op onze website kan door ons worden gewijzigd zonder voorafgaande aankondiging of verplichting.</p>
<h4>5. Opmerkingen, vragen en suggesties</h4>
<p>Abesim wenst geen vertrouwelijke of voorbehouden informatie te ontvangen via deze website. Alle door u aan ons verstrekte informatie (suggesties, ideeën en overige) zal worden beschouwd als niet-vertrouwelijk en openbaar (uitgezonderd zoals beschreven in punt 1. met betrekking tot de bescherming van de persoonlijke levenssfeer). Door Abesim materiaal te sturen, geeft u aan Abesim het onbeperkte en onherroepbare recht deze informatie te gebruiken, te vertonen, te wijzigen, te verwerken en te verspreiden en deze informatie rechtelijk te registreren. Tevens kan Abesim de ideeën en technieken vrij toepassen die u ons laat toekomen. Abesim heeft deze website met de grootst mogelijke zorg samengesteld. Abesim houdt zich aanbevolen voor suggesties of commentaar. Indien bezwaar bestaat tegen bepaalde teksten of afbeeldingen, kan dat ook kenbaar worden gemaakt.</p>
<h4>6. Rechtspraak</h4>
<p>Het staat Abesim vrij op elk moment de gebruiksvoorwaarden te wijzigen door die opnieuw op deze website te publiceren. De gebruiksvoorwaarden zijn conform de Belgische rechtspraak en de geschillen zullen beslecht worden conform diezelfde rechtspraak. In het geval dat een onderdeel van deze gebruiksvoorwaarden door een rechtbank met toepasselijke jurisdictie ongeldig of onuitvoerbaar zal worden verklaard, zal het betreffende deel van de gebruiksvoorwaarden als vervallen beschouwd worden, terwijl de resterende bepalingen van deze gebruiksvoorwaarden in volle geldigheid en werking van kracht zullen blijven.</p>
<h4>7. Cookiebeleid</h4>
<p>Om onze websites beter af te kunnen stemmen op uw behoeften en voorkeuren, maakt Abesim gebruik van cookies. U heeft de mogelijkheid om de cookies te weigeren. In dat geval maken we u er attent op dat bepaalde onderdelen van onze websites niet naar behoren kunnen functioneren. Het kan ook zijn dat u geen toegang meer zal hebben tot bepaalde diensten die wij op onze website aanbieden.</p>
<p>Indien u uw cookie-instellingen niet wijzigt en u opteert om ‘verder te gaan’, dan gaat Abesim ervan uit dat u onze cookies aanvaardt.</p>
<h5>Hieronder geven wij u graag meer informatie over cookies aan de hand van een eenvoudige Q&amp;A structuur.</h5>
<h6>Wat is een cookie?</h6>
<p>Een cookie is een tekstbestand dat in de webbrowser van uw computer of uw mobiel toestel – zoals uw Smartphone, iPhone, iPad en dergelijke – nagelaten wordt door de server van de website die u op dat moment raadpleegt. Een cookie bevat een code die alleen gelezen kan worden door de server die het er geplaatst heeft. De server heeft dus geen toegang tot andere informatie die zich bevindt op uw computer of uw mobiel toestel.</p>
<h6>Hoe is een cookie bestand opgebouwd?</h6>
<p>Een cookiebestand bestaat uit:</p>
<ul><li>de naam van de server die het cookie bestand geplaatst heeft</li>
<li>er wordt een vervaldatum meegegeven</li>
<li>een unieke cijfercode</li>
</ul><h6>Wat is het nut van een cookie?</h6>
<p>Aan de hand van cookies zorgen we ervoor dat uw surfervaring als bezoeker op één van onze websites zo optimaal mogelijk ervaren wordt. Dit onder andere om u sneller en makkelijker te laten navigeren tussen de verschillende onderdelen van de website of door het aanpassen van de inhoud van onze site aan uw persoonlijke voorkeuren bvb taalvoorkeur.</p>
<h6>Waar kan ik deze cookies terugvinden?</h6>
<p>Cookies worden in een afzonderlijke folder van uw browser op uw computer of uw mobiel toestel geplaatst.</p>
<h6>Wat is een ‘Session cookie’?</h6>
<p>Deze cookie heeft als functie om uw browser te herkennen gedurende het bezoek aan onze websites.</p>
<h6>Wat is een ‘Permanente cookie’?</h6>
<p>Deze cookie heeft als functie om uw browser te herkennen met het oog op herhaalde bezoeken aan onze websites.</p>
<h6>Welke cookies zijn noodzakelijk?</h6>
<p>U zal de indruk krijgen dat bepaalde onderdelen van onze websites niet of niet naar behoren functioneren indien u de noodzakelijke cookies uitschakelde. Abesim gebruikt dergelijke cookies bijvoorbeeld bij het invullen van contactformulieren of om mee te kunnen discussiëren op onze blogs. Abesim maakt gebruik van ‘noodzakelijke’ cookies wanneer u wenst in te loggen op uw persoonlijke account. Aan de hand van deze cookies kunnen wij op een veilige manier uw identiteit controleren om zo toegang te verlenen tot de persoonlijke informatie die u achterliet.</p>
<h6>Wat zijn ‘Functionele cookies’?</h6>
<p>Zoals het woord zelf suggereert, zorgen deze cookies voor het optimaal functioneren van onze websites zodat u een zo aangenaam en persoonlijk mogelijk bezoek aan onze websites ervaart. Abesim maakt gebruik van ‘Functionele cookies’ voor het ‘herinneren’ van uw persoonlijke voorkeuren en voor het vermijden van eenzelfde communicatie bij herhaalde bezoeken bijvoorbeeld bij het deelnemen aan een actie.</p>
<h6>Wat zijn ‘Performantie cookies’?</h6>
<p>Abesim maakt gebruik van ‘Performantie cookies’ om na te gaan hoe u onze websites gebruikt met het oog op het aanpassen en verbeteren van de inhoud en het gebruiksgemak van onze websites. Zo worden bijvoorbeeld het aantal bezoekers per pagina bijgehouden of de meest voorkomende taal waarin de website bezocht wordt.</p>
<h6>Wat zijn ‘Third Party cookies’?</h6>
<p>Dat zijn cookies die weggeschreven worden vanuit advertenties die door derden op de websites van Abesim vermeld worden. Dit met als doel om de advertenties en/of de inhoud van de advertenties aan uw persoonlijke voorkeuren aan te kunnen passen. U krijgt deze cookies uitsluitend te zien indien u deze niet uitschakelde. Bij het gebruik van third partie cookies beschikt noch Abesim, beschikken noch de adverteerders (derden) over uw persoonlijke gegevens.</p>
<h6>Wat is ‘Embedded content’?</h6>
<p>Abesim kan op haar websites doorverwijzen naar andere sites via een aanklikbare link. Zo komt u op een website van een andere organisatie terecht. Het kan zijn dat de website naar waar verwezen wordt ook gebruik maakt van cookies. Abesim adviseert u om op dat moment de gebruiksvoorwaarden van de betreffende organisatie te consulteren, vermeld op hun eigen website, om u te informeren omtrent hun privacy en cookie beleid.</p>
<h6>Hoe kan ik de cookies beheren?</h6>
<p>Het beheren van cookies heeft u zelf in de hand. U kan de instellingen van uw browser aanpassen naar uw persoonlijke voorkeuren. U kan steeds zowel reeds geïnstalleerde cookies verwijderen als nieuwe cookies weigeren door uw browserinstellingen aan te passen.</p>
<p>Onderstaande website geeft u een overzicht van de meest gebruikte browsers om u wegwijs te helpen bij het instellen van uw browservoorkeuren: <a href="http://www.aboutcookies.org/">http://www.aboutcookies.org/</a></p>
<p>Eind van deze gebruiksvoorwaarden.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_authors' => array(),
  'field_contact' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_contact_form' => array(),
  'field_contact_text' => array(),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'confidential' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'next_serial' => 1,
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_bar' => 1,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'status' => 1,
    'record_exists' => FALSE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(),
    'conditionals' => array(),
    'nid' => '59456832-874f-4977-84bc-c5535d10f316',
  ),
  'menu_node_links' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-12-18 12:48:16 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Zugriff verweigert',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'd9b441d4-35f2-431f-a9a9-825892f52ad4',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'de',
  'created' => 1423484821,
  'tnid' => 2,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '5a9c5c12-a4e5-4578-9e26-e89af9abea69',
  'revision_uid' => 1,
  'body' => array(),
  'field_authors' => array(),
  'field_contact' => array(),
  'field_contact_form' => array(),
  'field_contact_text' => array(),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'nid' => '5a9c5c12-a4e5-4578-9e26-e89af9abea69',
    'next_serial' => 1,
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'confidential' => 0,
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(),
    'conditionals' => array(),
  ),
  'menu_node_links' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-02-09 13:27:01 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Contact',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '2fe9309a-6b1b-4ad1-9f86-8e5c0e6ff7bf',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'fr',
  'created' => 1421402579,
  'tnid' => 6,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '61f60015-fc77-416f-9fa7-4f8a21139338',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h4>Comment pouvons-nous vous aider ?</h4>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<h4>Comment pouvons-nous vous aider ?</h4>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_authors' => array(
    'und' => array(
      0 => array(
        'target_id' => 111,
      ),
      1 => array(
        'target_id' => 110,
      ),
      2 => array(
        'target_id' => 109,
      ),
      3 => array(
        'target_id' => 108,
      ),
      4 => array(
        'target_id' => 107,
      ),
      5 => array(
        'target_id' => 106,
      ),
      6 => array(
        'target_id' => 103,
      ),
      7 => array(
        'target_id' => 105,
      ),
      8 => array(
        'target_id' => 104,
      ),
      9 => array(
        'target_id' => 102,
      ),
      10 => array(
        'target_id' => 101,
      ),
      11 => array(
        'target_id' => 100,
      ),
      12 => array(
        'target_id' => 99,
      ),
      13 => array(
        'target_id' => 98,
      ),
      14 => array(
        'target_id' => 97,
      ),
      15 => array(
        'target_id' => 96,
      ),
      16 => array(
        'target_id' => 94,
      ),
      17 => array(
        'target_id' => 95,
      ),
      18 => array(
        'target_id' => 56,
      ),
      19 => array(
        'target_id' => 84,
      ),
      20 => array(
        'target_id' => 85,
      ),
    ),
  ),
  'field_contact' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_contact_form' => array(),
  'field_contact_text' => array(),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'nid' => '61f60015-fc77-416f-9fa7-4f8a21139338',
    'next_serial' => 3,
    'confirmation' => '',
    'confirmation_format' => 'full_html',
    'redirect_url' => 'node/288',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => 'Envoyer',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => 'full_html',
    'preview_excluded_components' => array(),
    'confidential' => 0,
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(
      1 => array(
        'nid' => 18,
        'eid' => 1,
        'email' => 'info@abesim.com',
        'subject' => 'default',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => 'default',
        'excluded_components' => array(),
        'html' => 0,
        'attachments' => 0,
        'extra' => FALSE,
        'exclude_empty' => 0,
      ),
      2 => array(
        'nid' => 18,
        'eid' => 2,
        'email' => 18,
        'subject' => 'default',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => 'default',
        'excluded_components' => array(),
        'html' => 0,
        'attachments' => 0,
        'extra' => array(
          'email_mapping' => array(
            1 => 'info@abesim.com',
            2 => 'info@abesim.com',
            3 => 'info@abesim.com',
            4 => 'info@abesim.com',
            5 => 'info@abesim.com',
            6 => 'info@abesim.com',
            7 => 'info@abesim.com',
            8 => 'info@abesim.com',
          ),
        ),
        'exclude_empty' => 0,
      ),
    ),
    'components' => array(
      1 => array(
        'nid' => '61f60015-fc77-416f-9fa7-4f8a21139338',
        'cid' => 1,
        'pid' => 0,
        'form_key' => 'votre_demande',
        'name' => 'Votre demande',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => 'contact-your-question',
          'css_classes' => '',
          'cols' => '',
          'rows' => '',
          'resizable' => 1,
          'disabled' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 0,
        'page_num' => 1,
      ),
      2 => array(
        'nid' => '61f60015-fc77-416f-9fa7-4f8a21139338',
        'cid' => 2,
        'pid' => 0,
        'form_key' => 'meer_informatie',
        'name' => 'Plus d\'informations',
        'type' => 'fieldset',
        'value' => '',
        'extra' => array(
          'private' => 0,
          'css_classes' => '',
          'title_display' => 0,
          'collapsible' => 0,
          'collapsed' => 0,
          'description' => '',
        ),
        'required' => 0,
        'weight' => 1,
        'page_num' => 1,
      ),
      18 => array(
        'nid' => '61f60015-fc77-416f-9fa7-4f8a21139338',
        'cid' => 18,
        'pid' => 2,
        'form_key' => 'plus_dinformations_options',
        'name' => 'Plus d\'informations options',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'title_display' => 'none',
          'private' => 0,
          'wrapper_classes' => 'contact-information',
          'css_classes' => '',
          'aslist' => 0,
          'items' => '1|Diagnostic environnement
2|Techniques de construction
3|Géotechnique
4|Gestion de l’environnement
5|Expertise
6|Autres
7|Je souhaite formuler une plainte
8|Je souhaite des informations concernant un dossier en cours
',
          'multiple' => 1,
          'custom_keys' => 0,
          'empty_option' => '',
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'options_source' => '',
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 11,
        'page_num' => 1,
      ),
      4 => array(
        'nid' => '61f60015-fc77-416f-9fa7-4f8a21139338',
        'cid' => 4,
        'pid' => 0,
        'form_key' => 'vos_coordonnees',
        'name' => 'Vos coordonnées',
        'type' => 'fieldset',
        'value' => '',
        'extra' => array(
          'private' => 0,
          'css_classes' => 'contact-personal',
          'title_display' => 0,
          'collapsible' => 0,
          'collapsed' => 0,
          'description' => '',
        ),
        'required' => 0,
        'weight' => 3,
        'page_num' => 1,
      ),
      11 => array(
        'nid' => '61f60015-fc77-416f-9fa7-4f8a21139338',
        'cid' => 11,
        'pid' => 4,
        'form_key' => 'nom',
        'name' => 'Nom',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 4,
        'page_num' => 1,
      ),
      12 => array(
        'nid' => '61f60015-fc77-416f-9fa7-4f8a21139338',
        'cid' => 12,
        'pid' => 4,
        'form_key' => 'prenom',
        'name' => 'Prénom',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 5,
        'page_num' => 1,
      ),
      13 => array(
        'nid' => '61f60015-fc77-416f-9fa7-4f8a21139338',
        'cid' => 13,
        'pid' => 4,
        'form_key' => 'entreprise_si_dapplication',
        'name' => 'Entreprise (si d\'application)	 ',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 6,
        'page_num' => 1,
      ),
      14 => array(
        'nid' => '61f60015-fc77-416f-9fa7-4f8a21139338',
        'cid' => 14,
        'pid' => 4,
        'form_key' => 'e_mail',
        'name' => 'E-mail',
        'type' => 'email',
        'value' => '[current-user:mail]',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'multiple' => 0,
          'format' => 'short',
          'width' => '',
          'unique' => 0,
          'disabled' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 7,
        'page_num' => 1,
      ),
      15 => array(
        'nid' => '61f60015-fc77-416f-9fa7-4f8a21139338',
        'cid' => 15,
        'pid' => 4,
        'form_key' => 'numero_de_telephone',
        'name' => 'Numéro de téléphone',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 8,
        'page_num' => 1,
      ),
      16 => array(
        'nid' => '61f60015-fc77-416f-9fa7-4f8a21139338',
        'cid' => 16,
        'pid' => 4,
        'form_key' => 'rue_et_numero',
        'name' => 'Rue et n°',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 9,
        'page_num' => 1,
      ),
      17 => array(
        'nid' => '61f60015-fc77-416f-9fa7-4f8a21139338',
        'cid' => 17,
        'pid' => 4,
        'form_key' => 'code_postal_et_commune',
        'name' => 'Code postal et commune',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 10,
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'menu_node_links' => array(
    700 => array(
      'menu_name' => 'main-menu',
      'mlid' => 700,
      'plid' => 0,
      'link_path' => 'node/18',
      'router_path' => 'node/%',
      'link_title' => 'Contact',
      'options' => 'a:3:{s:9:"node_type";s:4:"page";s:5:"alter";b:1;s:10:"attributes";a:0:{}}',
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => -33,
      'depth' => 1,
      'customized' => 1,
      'p1' => 700,
      'p2' => 0,
      'p3' => 0,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'uuid' => 'e60ac404-4f63-4c62-ab22-92583db7da1a',
      'language' => 'fr',
      'i18n_tsid' => 0,
    ),
    473 => array(
      'menu_name' => 'navigation',
      'mlid' => 473,
      'plid' => 0,
      'link_path' => 'node/18',
      'router_path' => 'node/%',
      'link_title' => 'Contact',
      'options' => 'a:3:{s:9:"node_type";s:4:"page";s:5:"alter";b:1;s:10:"attributes";a:1:{s:5:"title";s:0:"";}}',
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => -50,
      'depth' => 1,
      'customized' => 1,
      'p1' => 473,
      'p2' => 0,
      'p3' => 0,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'uuid' => '9d50c261-b784-47eb-b7cf-bb7f5b54009c',
      'language' => 'fr',
      'i18n_tsid' => 0,
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-01-16 11:02:59 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Bouwtechniek',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '1fd867e7-2e84-4b26-b85f-d6eb42a8ea39',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'nl',
  'created' => 1427299564,
  'tnid' => 19,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '65b7a960-f7b2-4f7a-8ea3-56b05575ebd4',
  'revision_uid' => 1,
  'body' => array(),
  'field_authors' => array(),
  'field_contact' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_contact_form' => array(),
  'field_contact_text' => array(),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'confidential' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'next_serial' => 1,
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_bar' => 1,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'status' => 1,
    'record_exists' => FALSE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(),
    'conditionals' => array(),
    'nid' => '65b7a960-f7b2-4f7a-8ea3-56b05575ebd4',
  ),
  'menu_node_links' => array(
    483 => array(
      'menu_name' => 'main-menu',
      'mlid' => 483,
      'plid' => 479,
      'link_path' => 'node/19',
      'router_path' => 'node/%',
      'link_title' => 'Bouwtechniek',
      'options' => 'a:2:{s:9:"node_type";s:4:"page";s:5:"alter";b:1;}',
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 1,
      'expanded' => 0,
      'weight' => -49,
      'depth' => 3,
      'customized' => 1,
      'p1' => 468,
      'p2' => 479,
      'p3' => 483,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'uuid' => 'af4bc45f-b56e-475f-aa1e-41b17557f0da',
      'language' => 'nl',
      'i18n_tsid' => 0,
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-03-25 17:06:04 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Comment pouvons-nous vous aider ?',
  'log' => '',
  'status' => 0,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'a3a41918-cb92-48ce-a76d-8d6cbc6cf156',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'fr',
  'created' => 1443450849,
  'tnid' => 0,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '663c1041-e595-4831-bcd7-48cab6d2af99',
  'revision_uid' => 1,
  'body' => array(),
  'field_authors' => array(),
  'field_contact' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'field_contact_form' => array(),
  'field_contact_text' => array(),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'nid' => '663c1041-e595-4831-bcd7-48cab6d2af99',
    'next_serial' => 1,
    'confirmation' => '',
    'confirmation_format' => 'full_html',
    'redirect_url' => 'node/288',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => 'Envoyer',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => 'full_html',
    'preview_excluded_components' => array(),
    'confidential' => 0,
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(
      1 => array(
        'nid' => 299,
        'eid' => 1,
        'email' => 18,
        'subject' => 'default',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => 'default',
        'excluded_components' => array(),
        'html' => 0,
        'attachments' => 0,
        'extra' => array(
          'email_mapping' => array(
            1 => 'info@abesim.com',
            2 => 'info@abesim.com',
            3 => 'info@abesim.com',
          ),
        ),
        'exclude_empty' => 0,
      ),
    ),
    'components' => array(
      1 => array(
        'nid' => '663c1041-e595-4831-bcd7-48cab6d2af99',
        'cid' => 1,
        'pid' => 0,
        'form_key' => 'votre_demande',
        'name' => 'Votre demande',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => 'contact-your-question',
          'css_classes' => '',
          'cols' => '',
          'rows' => '',
          'resizable' => 1,
          'disabled' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 0,
        'page_num' => 1,
      ),
      2 => array(
        'nid' => '663c1041-e595-4831-bcd7-48cab6d2af99',
        'cid' => 2,
        'pid' => 0,
        'form_key' => 'meer_informatie',
        'name' => 'Plus d\'informations',
        'type' => 'fieldset',
        'value' => '',
        'extra' => array(
          'private' => 0,
          'css_classes' => '',
          'title_display' => 0,
          'collapsible' => 0,
          'collapsed' => 0,
          'description' => '',
        ),
        'required' => 0,
        'weight' => 1,
        'page_num' => 1,
      ),
      4 => array(
        'nid' => '663c1041-e595-4831-bcd7-48cab6d2af99',
        'cid' => 4,
        'pid' => 0,
        'form_key' => 'vos_coordonnees',
        'name' => 'Vos coordonnées',
        'type' => 'fieldset',
        'value' => '',
        'extra' => array(
          'private' => 0,
          'css_classes' => 'contact-personal',
          'title_display' => 0,
          'collapsible' => 0,
          'collapsed' => 0,
          'description' => '',
        ),
        'required' => 0,
        'weight' => 3,
        'page_num' => 1,
      ),
      11 => array(
        'nid' => '663c1041-e595-4831-bcd7-48cab6d2af99',
        'cid' => 11,
        'pid' => 4,
        'form_key' => 'nom',
        'name' => 'Nom',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 4,
        'page_num' => 1,
      ),
      12 => array(
        'nid' => '663c1041-e595-4831-bcd7-48cab6d2af99',
        'cid' => 12,
        'pid' => 4,
        'form_key' => 'prenom',
        'name' => 'Prénom',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 5,
        'page_num' => 1,
      ),
      13 => array(
        'nid' => '663c1041-e595-4831-bcd7-48cab6d2af99',
        'cid' => 13,
        'pid' => 4,
        'form_key' => 'entreprise_si_dapplication',
        'name' => 'Entreprise (si d\'application)	 ',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 6,
        'page_num' => 1,
      ),
      14 => array(
        'nid' => '663c1041-e595-4831-bcd7-48cab6d2af99',
        'cid' => 14,
        'pid' => 4,
        'form_key' => 'e_mail',
        'name' => 'E-mail',
        'type' => 'email',
        'value' => '[current-user:mail]',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'multiple' => 0,
          'format' => 'short',
          'width' => '',
          'unique' => 0,
          'disabled' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 7,
        'page_num' => 1,
      ),
      15 => array(
        'nid' => '663c1041-e595-4831-bcd7-48cab6d2af99',
        'cid' => 15,
        'pid' => 4,
        'form_key' => 'numero_de_telephone',
        'name' => 'Numéro de téléphone',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 8,
        'page_num' => 1,
      ),
      16 => array(
        'nid' => '663c1041-e595-4831-bcd7-48cab6d2af99',
        'cid' => 16,
        'pid' => 4,
        'form_key' => 'rue_et_numero',
        'name' => 'Rue et n°',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 9,
        'page_num' => 1,
      ),
      17 => array(
        'nid' => '663c1041-e595-4831-bcd7-48cab6d2af99',
        'cid' => 17,
        'pid' => 4,
        'form_key' => 'code_postal_et_commune',
        'name' => 'Code postal et commune',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 10,
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'menu_node_links' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-09-28 16:34:09 +0200',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Method and vision',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '4f4548de-80f9-4874-a4fc-10e163ecf65e',
  'ds_switch' => '',
  'type' => 'block',
  'language' => 'en',
  'created' => 1427281342,
  'tnid' => 30,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '69fec12f-d576-44f5-b0a3-86884ead8f02',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>(Diagnostiek EN)</p>
<p>[[{"fid":"112","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"","field_file_image_title_text[und][0][value]":""},"type":"media","attributes":{"class":"media-element file-default"},"link_text":null}]]</p>
<p class="more"><a class="more" href="/en/node/112">Read more</a></p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>(Diagnostiek EN)</p>
<p><img class="media-element file-default" typeof="foaf:Image" src="http://default/sites/default/files/diagnostics-en.jpg" alt="" /></p>
<p class="more"><a class="more" href="/en/node/112">Read more</a></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'menu_node_links' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-03-25 12:02:22 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Home',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '01a38989-775b-4d43-890a-9921c5c700b2',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'nl',
  'created' => 1418283405,
  'tnid' => 24,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '6a09246b-ced7-410d-b4c9-79765cbca82b',
  'revision_uid' => 23,
  'body' => array(),
  'field_authors' => array(),
  'field_contact' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_contact_form' => array(
    'und' => array(
      0 => array(
        'target_id' => 44,
      ),
    ),
  ),
  'field_contact_text' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Meer info? Contacteer ons <strong>via het contactformulier</strong></p>
<p>of neem persoonlijk contact op via één van onze adressen.</p>
<p>We helpen u graag verder.</p>
',
        'format' => 'full_html',
        'safe_value' => '<p>Meer info? Contacteer ons <strong>via het contactformulier</strong></p>
<p>of neem persoonlijk contact op via één van onze adressen.</p>
<p>We helpen u graag verder.</p>
',
      ),
    ),
  ),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'confidential' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'next_serial' => 1,
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_bar' => 1,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'status' => 1,
    'record_exists' => FALSE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(),
    'conditionals' => array(),
    'nid' => '6a09246b-ced7-410d-b4c9-79765cbca82b',
  ),
  'menu_node_links' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-12-11 08:36:45 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Nieuws',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '5b490cf8-b427-4e7b-85ac-78d7bc041f93',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'nl',
  'created' => 1427207643,
  'tnid' => 5,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '715d0956-2eef-469e-9e95-b378f0fd1ba8',
  'revision_uid' => 1,
  'body' => array(),
  'field_authors' => array(),
  'field_contact' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_contact_form' => array(
    'und' => array(
      0 => array(
        'target_id' => 44,
      ),
    ),
  ),
  'field_contact_text' => array(
    'und' => array(
      0 => array(
        'value' => '<p><em>Meer info?</em></p>
<p>Stuur een <strong>bericht via het contactformulier</strong></p>
<p>of neem persoonlijk contact op via één van onze adressen.</p>
<p>We helpen u graag verder.</p>
',
        'format' => 'full_html',
        'safe_value' => '<p><em>Meer info?</em></p>
<p>Stuur een <strong>bericht via het contactformulier</strong></p>
<p>of neem persoonlijk contact op via één van onze adressen.</p>
<p>We helpen u graag verder.</p>
',
      ),
    ),
  ),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'confidential' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'next_serial' => 1,
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_bar' => 1,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'status' => 1,
    'record_exists' => FALSE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(),
    'conditionals' => array(),
    'nid' => '715d0956-2eef-469e-9e95-b378f0fd1ba8',
  ),
  'menu_node_links' => array(
    474 => array(
      'menu_name' => 'main-menu',
      'mlid' => 474,
      'plid' => 0,
      'link_path' => 'node/23',
      'router_path' => 'node/%',
      'link_title' => 'Nieuws',
      'options' => 'a:3:{s:10:"attributes";a:0:{}s:5:"alter";b:1;s:9:"node_type";s:4:"page";}',
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => -47,
      'depth' => 1,
      'customized' => 1,
      'p1' => 474,
      'p2' => 0,
      'p3' => 0,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'uuid' => '66f032e2-6775-4412-81b2-96c7e714b473',
      'language' => 'nl',
      'i18n_tsid' => 0,
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-03-24 15:34:03 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Home',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '41771adf-6000-4e6c-a028-3544779299ac',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'en',
  'created' => 1421402487,
  'tnid' => 24,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '73eaa7b6-7050-4238-a81c-b41295c6a665',
  'revision_uid' => 1,
  'body' => array(),
  'field_authors' => array(),
  'field_contact' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_contact_form' => array(),
  'field_contact_text' => array(),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'confidential' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'next_serial' => 1,
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_bar' => 1,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'status' => 1,
    'record_exists' => FALSE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(),
    'conditionals' => array(),
    'nid' => '73eaa7b6-7050-4238-a81c-b41295c6a665',
  ),
  'menu_node_links' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-01-16 11:01:27 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Expertise',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'f2d00c26-0095-4d51-b924-3aff358269f6',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'nl',
  'created' => 1427299611,
  'tnid' => 26,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '8dc1860b-71e2-42a2-8c51-4cc54832d06f',
  'revision_uid' => 1,
  'body' => array(),
  'field_authors' => array(),
  'field_contact' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_contact_form' => array(),
  'field_contact_text' => array(),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'confidential' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'next_serial' => 1,
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_bar' => 1,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'status' => 1,
    'record_exists' => FALSE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(),
    'conditionals' => array(),
    'nid' => '8dc1860b-71e2-42a2-8c51-4cc54832d06f',
  ),
  'menu_node_links' => array(
    480 => array(
      'menu_name' => 'main-menu',
      'mlid' => 480,
      'plid' => 478,
      'link_path' => 'node/26',
      'router_path' => 'node/%',
      'link_title' => 'Expertise',
      'options' => 'a:3:{s:9:"node_type";s:4:"page";s:5:"alter";b:1;s:10:"attributes";a:0:{}}',
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 1,
      'expanded' => 0,
      'weight' => -49,
      'depth' => 3,
      'customized' => 1,
      'p1' => 468,
      'p2' => 478,
      'p3' => 480,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'uuid' => '5a961443-c5fa-4b1d-9cc4-17f0b5206103',
      'language' => 'nl',
      'i18n_tsid' => 0,
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-03-25 17:06:51 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Page non trouvée',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'd3826e15-639b-4708-bc01-3122e8f4eaf1',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'fr',
  'created' => 1421402653,
  'tnid' => 2,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '91e03bc2-0f53-4771-bbb6-60d25c2ed2c2',
  'revision_uid' => 1,
  'body' => array(),
  'field_authors' => array(),
  'field_contact' => array(),
  'field_contact_form' => array(),
  'field_contact_text' => array(),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'nid' => '91e03bc2-0f53-4771-bbb6-60d25c2ed2c2',
    'next_serial' => 1,
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'confidential' => 0,
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(),
    'conditionals' => array(),
  ),
  'menu_node_links' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-01-16 11:04:13 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Seite nicht gefunden',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '4692d9d3-e403-4e39-a5fe-2914c772f4b1',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'de',
  'created' => 1423484780,
  'tnid' => 2,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '93a722ed-8398-4c23-b7ef-8dd1f4d50888',
  'revision_uid' => 1,
  'body' => array(),
  'field_authors' => array(),
  'field_contact' => array(),
  'field_contact_form' => array(),
  'field_contact_text' => array(),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'nid' => '93a722ed-8398-4c23-b7ef-8dd1f4d50888',
    'next_serial' => 1,
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'confidential' => 0,
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(),
    'conditionals' => array(),
  ),
  'menu_node_links' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-02-09 13:26:20 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Doormat middle NL',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '0e82d18d-1dbe-4518-a054-2eb17a0bf65c',
  'ds_switch' => '',
  'type' => 'block',
  'language' => 'nl',
  'created' => 1427298344,
  'tnid' => 29,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => '96a66101-9daa-4fe6-a4ad-957b35e43c17',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<ul>
	<li><a href="/nl/node/9"><strong>Onze diensten</strong></a></li>
	<li><a href="/nl/node/33">Realisaties</a></li>
	<li><a href="/nl/node/23">Nieuws</a></li>
	<li><a href="/nl/node/3">Jobs</a></li>
	<li><a href="/nl/node/44">Contact</a></li>
	<li><a href="/nl/node/39"><strong>Werkwijze &amp; visie</strong></a></li>
</ul>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<ul><li><a href="/nl/node/9"><strong>Onze diensten</strong></a></li>
<li><a href="/nl/node/33">Realisaties</a></li>
<li><a href="/nl/node/23">Nieuws</a></li>
<li><a href="/nl/node/3">Jobs</a></li>
<li><a href="/nl/node/44">Contact</a></li>
<li><a href="/nl/node/39"><strong>Werkwijze &amp; visie</strong></a></li>
</ul>',
        'safe_summary' => '',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'menu_node_links' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-03-25 16:45:44 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'PL - How can we help you ?',
  'log' => '',
  'status' => 0,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'e2d7ddb3-df53-4473-8014-5fb43ccd8014',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'pl',
  'created' => 1443453536,
  'tnid' => 0,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'a41d29bd-9bba-4ad0-85b9-ff109a3e87f5',
  'revision_uid' => 1,
  'body' => array(),
  'field_authors' => array(),
  'field_contact' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'field_contact_form' => array(),
  'field_contact_text' => array(),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'nid' => 'a41d29bd-9bba-4ad0-85b9-ff109a3e87f5',
    'next_serial' => 1,
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'confidential' => 0,
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(
      1 => array(
        'nid' => 'a41d29bd-9bba-4ad0-85b9-ff109a3e87f5',
        'cid' => 1,
        'pid' => 0,
        'form_key' => 'uw_vraag',
        'name' => 'Your question',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => 'contact-your-question',
          'css_classes' => '',
          'cols' => '',
          'rows' => '',
          'resizable' => 1,
          'disabled' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 0,
        'page_num' => 1,
      ),
      8 => array(
        'nid' => 'a41d29bd-9bba-4ad0-85b9-ff109a3e87f5',
        'cid' => 8,
        'pid' => 0,
        'form_key' => 'meer_informatie',
        'name' => 'More information',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => 'contact-information',
          'css_classes' => '',
          'aslist' => 0,
          'multiple' => 0,
          'custom_keys' => 0,
          'items' => '',
          'empty_option' => '',
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'options_source' => '',
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 1,
        'page_num' => 1,
      ),
      9 => array(
        'nid' => 'a41d29bd-9bba-4ad0-85b9-ff109a3e87f5',
        'cid' => 9,
        'pid' => 0,
        'form_key' => 'uw_gegevens',
        'name' => 'Your data',
        'type' => 'fieldset',
        'value' => '',
        'extra' => array(
          'private' => 0,
          'css_classes' => 'contact-personal',
          'title_display' => 0,
          'collapsible' => 0,
          'collapsed' => 0,
          'description' => '',
        ),
        'required' => 0,
        'weight' => 2,
        'page_num' => 1,
      ),
      2 => array(
        'nid' => 'a41d29bd-9bba-4ad0-85b9-ff109a3e87f5',
        'cid' => 2,
        'pid' => 9,
        'form_key' => 'naam',
        'name' => 'Surname',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 3,
        'page_num' => 1,
      ),
      3 => array(
        'nid' => 'a41d29bd-9bba-4ad0-85b9-ff109a3e87f5',
        'cid' => 3,
        'pid' => 9,
        'form_key' => 'voornaam',
        'name' => 'First name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 4,
        'page_num' => 1,
      ),
      4 => array(
        'nid' => 'a41d29bd-9bba-4ad0-85b9-ff109a3e87f5',
        'cid' => 4,
        'pid' => 9,
        'form_key' => 'bedrijf',
        'name' => 'Company (if applicable)',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 5,
        'page_num' => 1,
      ),
      5 => array(
        'nid' => 'a41d29bd-9bba-4ad0-85b9-ff109a3e87f5',
        'cid' => 5,
        'pid' => 9,
        'form_key' => 'email',
        'name' => 'Email',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'unique' => 0,
          'disabled' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
          'multiple' => 0,
          'format' => 'short',
        ),
        'required' => 1,
        'weight' => 6,
        'page_num' => 1,
      ),
      6 => array(
        'nid' => 'a41d29bd-9bba-4ad0-85b9-ff109a3e87f5',
        'cid' => 6,
        'pid' => 9,
        'form_key' => 'tel',
        'name' => 'Tel.',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 7,
        'page_num' => 1,
      ),
      7 => array(
        'nid' => 'a41d29bd-9bba-4ad0-85b9-ff109a3e87f5',
        'cid' => 7,
        'pid' => 9,
        'form_key' => 'adres',
        'name' => 'Address',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 8,
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'menu_node_links' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-09-28 17:18:56 +0200',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Werkwijze en visie',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'f0d63157-3ed1-42bf-805c-7ac22c0c84c4',
  'ds_switch' => '',
  'type' => 'block',
  'language' => 'nl',
  'created' => 1427281315,
  'tnid' => 30,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'ad9338ca-1633-4bfc-bc76-6c4da62b55c6',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h2>Werkwijze &amp; visie</h2>
<p>[[{"fid":"80","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"","field_file_image_title_text[und][0][value]":""},"type":"media","attributes":{"class":"media-element file-default"},"link_text":null}]]</p>
<p>In een eerste fase bekijken we samen met u welke informatie u nodig hebt en hoe we die op een budgettair haalbare manier kunnen verkrijgen. Vervolgens bepalen we welke strategische aanpak zich het beste leent om deze doelstelling te bereiken.</p>
<p>Aan de hand van een meer gedetailleerd onderzoek ter plaatse, verfijnen we de gekozen strategie. Vervolgens voeren we de vooropgestelde aanpak uit.</p>
<p>Na afloop toetsen we de resultaten aan onze oorspronkelijke doelstelling. Indien nodig volgt bijkomend onderzoek om resultaten te bevestigen of te weerleggen.</p>
<p class="more"><a class="more" href="/nl/node/39">Lees meer</a></p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<h2>Werkwijze &amp; visie</h2>
<p><img class="media-element file-default" typeof="foaf:Image" src="http://default/sites/default/files/diagnostiek.jpg" alt="" /></p>
<p>In een eerste fase bekijken we samen met u welke informatie u nodig hebt en hoe we die op een budgettair haalbare manier kunnen verkrijgen. Vervolgens bepalen we welke strategische aanpak zich het beste leent om deze doelstelling te bereiken.</p>
<p>Aan de hand van een meer gedetailleerd onderzoek ter plaatse, verfijnen we de gekozen strategie. Vervolgens voeren we de vooropgestelde aanpak uit.</p>
<p>Na afloop toetsen we de resultaten aan onze oorspronkelijke doelstelling. Indien nodig volgt bijkomend onderzoek om resultaten te bevestigen of te weerleggen.</p>
<p class="more"><a class="more" href="/nl/node/39">Lees meer</a></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'menu_node_links' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-03-25 12:01:55 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Contact',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '859b3f10-1061-42bc-83e5-46bfa005bafa',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'en',
  'created' => 1421402493,
  'tnid' => 6,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'afedb248-2d9f-4318-95f6-a5c1952225bd',
  'revision_uid' => 1,
  'body' => array(),
  'field_authors' => array(),
  'field_contact' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_contact_form' => array(),
  'field_contact_text' => array(),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'confidential' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'next_serial' => 1,
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_bar' => 1,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'status' => 1,
    'record_exists' => FALSE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(),
    'conditionals' => array(),
    'nid' => 'afedb248-2d9f-4318-95f6-a5c1952225bd',
  ),
  'menu_node_links' => array(
    475 => array(
      'menu_name' => 'main-menu',
      'mlid' => 475,
      'plid' => 0,
      'link_path' => 'node/31',
      'router_path' => 'node/%',
      'link_title' => 'Contact',
      'options' => 'a:2:{s:9:"node_type";s:4:"page";s:5:"alter";b:1;}',
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => -39,
      'depth' => 1,
      'customized' => 1,
      'p1' => 475,
      'p2' => 0,
      'p3' => 0,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'uuid' => '6d3e7c5a-384f-4628-ac24-33343cd6f62d',
      'language' => 'en',
      'i18n_tsid' => 0,
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-01-16 11:01:33 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Contact: Sjabloon',
  'log' => '',
  'status' => 0,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '2013dcbc-0cc0-4059-8127-aabef95ab6f9',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'nl',
  'created' => 1427295775,
  'tnid' => 0,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'b2871904-6a26-4cb6-bbaf-b59f7ab27661',
  'revision_uid' => 1,
  'body' => array(),
  'field_authors' => array(),
  'field_contact' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'field_contact_form' => array(),
  'field_contact_text' => array(),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'nid' => 'b2871904-6a26-4cb6-bbaf-b59f7ab27661',
    'next_serial' => 2,
    'confirmation' => '',
    'confirmation_format' => 'full_html',
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => 'Verzenden',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => 'full_html',
    'preview_excluded_components' => array(),
    'confidential' => 0,
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(
      1 => array(
        'nid' => 'b2871904-6a26-4cb6-bbaf-b59f7ab27661',
        'cid' => 1,
        'pid' => 0,
        'form_key' => 'uw_vraag',
        'name' => 'Uw vraag',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'cols' => '',
          'rows' => '',
          'resizable' => 1,
          'disabled' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 7,
        'page_num' => 1,
      ),
      7 => array(
        'nid' => 'b2871904-6a26-4cb6-bbaf-b59f7ab27661',
        'cid' => 7,
        'pid' => 0,
        'form_key' => 'meer_informatie',
        'name' => 'Meer informatie',
        'type' => 'fieldset',
        'value' => '',
        'extra' => array(
          'private' => 0,
          'css_classes' => '',
          'title_display' => 0,
          'collapsible' => 0,
          'collapsed' => 0,
          'description' => '',
        ),
        'required' => 0,
        'weight' => 8,
        'page_num' => 1,
      ),
      6 => array(
        'nid' => 'b2871904-6a26-4cb6-bbaf-b59f7ab27661',
        'cid' => 6,
        'pid' => 7,
        'form_key' => 'meer_informatie_opties',
        'name' => 'Meer informatie opties',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'title_display' => 'none',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'aslist' => 0,
          'items' => '1|Finale redactie
2|Onderhandelingen en evaluaties
3|Lastenboek
4|Gedetailleerde planning
5|Kostprijsraming
6|Veiligheidscoördinatorschap
7|Prijsvragen
8|Ontwerp gunningsrapport
9|Werfopvolging
10|Eindrapportage
',
          'multiple' => 1,
          'custom_keys' => 0,
          'empty_option' => '',
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'options_source' => '',
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 8,
        'page_num' => 1,
      ),
      9 => array(
        'nid' => 'b2871904-6a26-4cb6-bbaf-b59f7ab27661',
        'cid' => 9,
        'pid' => 0,
        'form_key' => 'uw_gegevens',
        'name' => 'Uw gegevens',
        'type' => 'fieldset',
        'value' => '',
        'extra' => array(
          'private' => 0,
          'css_classes' => '',
          'title_display' => 0,
          'collapsible' => 0,
          'collapsed' => 0,
          'description' => '',
        ),
        'required' => 0,
        'weight' => 9,
        'page_num' => 1,
      ),
      2 => array(
        'nid' => 'b2871904-6a26-4cb6-bbaf-b59f7ab27661',
        'cid' => 2,
        'pid' => 9,
        'form_key' => 'naam',
        'name' => 'Naam',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 8,
        'page_num' => 1,
      ),
      3 => array(
        'nid' => 'b2871904-6a26-4cb6-bbaf-b59f7ab27661',
        'cid' => 3,
        'pid' => 9,
        'form_key' => 'voornaam',
        'name' => 'Voornaam',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 9,
        'page_num' => 1,
      ),
      4 => array(
        'nid' => 'b2871904-6a26-4cb6-bbaf-b59f7ab27661',
        'cid' => 4,
        'pid' => 9,
        'form_key' => 'bedrijf_indien_toepasbaar',
        'name' => 'Bedrijf (indien toepasbaar)',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 10,
        'page_num' => 1,
      ),
      5 => array(
        'nid' => 'b2871904-6a26-4cb6-bbaf-b59f7ab27661',
        'cid' => 5,
        'pid' => 9,
        'form_key' => 'e_mail',
        'name' => 'E-mail',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'multiple' => 0,
          'format' => 'short',
          'width' => '',
          'unique' => 0,
          'disabled' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 11,
        'page_num' => 1,
      ),
      8 => array(
        'nid' => 'b2871904-6a26-4cb6-bbaf-b59f7ab27661',
        'cid' => 8,
        'pid' => 9,
        'form_key' => 'telefoonnummer',
        'name' => 'Telefoonnummer',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 12,
        'page_num' => 1,
      ),
      10 => array(
        'nid' => 'b2871904-6a26-4cb6-bbaf-b59f7ab27661',
        'cid' => 10,
        'pid' => 9,
        'form_key' => 'straat_en_huisnummer',
        'name' => 'Straat en huisnummer',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 13,
        'page_num' => 1,
      ),
      11 => array(
        'nid' => 'b2871904-6a26-4cb6-bbaf-b59f7ab27661',
        'cid' => 11,
        'pid' => 9,
        'form_key' => 'postcode_en_woonplaats',
        'name' => 'Postcode en woonplaats',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 14,
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'menu_node_links' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-03-25 16:02:55 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Realisaties',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '4d381800-d938-434f-9afd-36212d9f6eca',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'nl',
  'created' => 1427209493,
  'tnid' => 33,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'c615f9cc-6b27-45dc-80f4-936280e6010a',
  'revision_uid' => 1,
  'body' => array(),
  'field_authors' => array(),
  'field_contact' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_contact_form' => array(
    'und' => array(
      0 => array(
        'target_id' => 44,
      ),
    ),
  ),
  'field_contact_text' => array(
    'und' => array(
      0 => array(
        'value' => '<p><em>Meer info?</em></p>
<p>Stuur een <strong>bericht via het contactformulier</strong></p>
<p>of neem persoonlijk contact op via één van onze adressen.</p>
<p>We helpen u graag verder.</p>
',
        'format' => 'full_html',
        'safe_value' => '<p><em>Meer info?</em></p>
<p>Stuur een <strong>bericht via het contactformulier</strong></p>
<p>of neem persoonlijk contact op via één van onze adressen.</p>
<p>We helpen u graag verder.</p>
',
      ),
    ),
  ),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'confidential' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'next_serial' => 1,
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_bar' => 1,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'status' => 1,
    'record_exists' => FALSE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(),
    'conditionals' => array(),
    'nid' => 'c615f9cc-6b27-45dc-80f4-936280e6010a',
  ),
  'menu_node_links' => array(
    470 => array(
      'menu_name' => 'main-menu',
      'mlid' => 470,
      'plid' => 0,
      'link_path' => 'node/33',
      'router_path' => 'node/%',
      'link_title' => 'Realisaties',
      'options' => 'a:4:{s:10:"attributes";a:0:{}s:5:"alter";b:1;s:10:"identifier";s:29:"main-menu_realisaties:node/29";s:9:"node_type";s:4:"page";}',
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => -48,
      'depth' => 1,
      'customized' => 1,
      'p1' => 470,
      'p2' => 0,
      'p3' => 0,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'uuid' => 'a3536f2e-feb8-43f9-ba42-aac4e8be80b9',
      'language' => 'nl',
      'i18n_tsid' => 0,
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-03-24 16:04:53 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Nach Hause',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '4b042759-745f-4af3-a43e-9418773b428e',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'de',
  'created' => 1423484838,
  'tnid' => 0,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'c8a1c688-8c35-4308-957d-e732e2e4945e',
  'revision_uid' => 1,
  'body' => array(),
  'field_authors' => array(),
  'field_contact' => array(),
  'field_contact_form' => array(),
  'field_contact_text' => array(),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'nid' => 'c8a1c688-8c35-4308-957d-e732e2e4945e',
    'next_serial' => 1,
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'confidential' => 0,
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(),
    'conditionals' => array(),
  ),
  'menu_node_links' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-02-09 13:27:18 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Wie zijn we?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'b75a06f7-1090-4f19-a7f5-9a0c5c72f270',
  'ds_switch' => '',
  'type' => 'block',
  'language' => 'nl',
  'created' => 1427212260,
  'tnid' => 35,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'cabb7272-2925-48ce-b46a-80fad533dcfe',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Wat doen we?</p>
<p><a href="/nl/node/9">[[{"fid":"41","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"wie zijn we?","field_file_image_title_text[und][0][value]":"Wie zijn we?"},"type":"media","link_text":null,"attributes":{"alt":"wie zijn we?","title":"Wie zijn we?","class":"media-element file-default"}}]]</a></p>
<p><a class="more" href="/nl/node/9">Lees meer</a></p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Wat doen we?</p>
<p><a href="/nl/node/9"><img alt="wie zijn we?" title="Wie zijn we?" class="media-element file-default" typeof="foaf:Image" src="http://default/sites/default/files/a1.jpg" /></a></p>
<p><a class="more" href="/nl/node/9">Lees meer</a></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'menu_node_links' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-03-24 16:51:00 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Milieu',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'fa7dd277-a108-4371-b26e-f08225d6a14d',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'nl',
  'created' => 1427299514,
  'tnid' => 36,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'd25518cd-b755-43a5-9cc8-cea054de8fdc',
  'revision_uid' => 1,
  'body' => array(),
  'field_authors' => array(),
  'field_contact' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_contact_form' => array(),
  'field_contact_text' => array(),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'confidential' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'next_serial' => 1,
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_bar' => 1,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'status' => 1,
    'record_exists' => FALSE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(),
    'conditionals' => array(),
    'nid' => 'd25518cd-b755-43a5-9cc8-cea054de8fdc',
  ),
  'menu_node_links' => array(
    482 => array(
      'menu_name' => 'main-menu',
      'mlid' => 482,
      'plid' => 479,
      'link_path' => 'node/36',
      'router_path' => 'node/%',
      'link_title' => 'Milieu',
      'options' => 'a:3:{s:9:"node_type";s:4:"page";s:5:"alter";b:1;s:10:"attributes";a:0:{}}',
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 1,
      'expanded' => 1,
      'weight' => -50,
      'depth' => 3,
      'customized' => 1,
      'p1' => 468,
      'p2' => 479,
      'p3' => 482,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'uuid' => 'b4de3425-5f49-473b-b6e9-7be8f3b17e7b',
      'language' => 'nl',
      'i18n_tsid' => 0,
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-03-25 17:05:14 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Geotechniek',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'f26a0014-99c2-47f3-b7d0-f07cbc3c4794',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'nl',
  'created' => 1427299582,
  'tnid' => 37,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'd300b282-777e-4705-8438-0c6618d9d7a0',
  'revision_uid' => 1,
  'body' => array(),
  'field_authors' => array(),
  'field_contact' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_contact_form' => array(),
  'field_contact_text' => array(),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'confidential' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'next_serial' => 1,
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_bar' => 1,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'status' => 1,
    'record_exists' => FALSE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(),
    'conditionals' => array(),
    'nid' => 'd300b282-777e-4705-8438-0c6618d9d7a0',
  ),
  'menu_node_links' => array(
    484 => array(
      'menu_name' => 'main-menu',
      'mlid' => 484,
      'plid' => 479,
      'link_path' => 'node/37',
      'router_path' => 'node/%',
      'link_title' => 'Geotechniek',
      'options' => 'a:2:{s:9:"node_type";s:4:"page";s:5:"alter";b:1;}',
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 1,
      'expanded' => 0,
      'weight' => -48,
      'depth' => 3,
      'customized' => 1,
      'p1' => 468,
      'p2' => 479,
      'p3' => 484,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'uuid' => '5c5550b4-6212-4845-85b4-f0becb8b3748',
      'language' => 'nl',
      'i18n_tsid' => 0,
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-03-25 17:06:22 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'How can we help you ?',
  'log' => '',
  'status' => 0,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '02e10d16-d0d8-4eb2-ba5f-6cc09f952bd2',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'en',
  'created' => 1443453075,
  'tnid' => 0,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'd813b701-6dcb-44e6-98dd-9b55e0cb2355',
  'revision_uid' => 1,
  'body' => array(),
  'field_authors' => array(),
  'field_contact' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'field_contact_form' => array(),
  'field_contact_text' => array(),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'nid' => 'd813b701-6dcb-44e6-98dd-9b55e0cb2355',
    'next_serial' => 1,
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'confidential' => 0,
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(
      1 => array(
        'nid' => 'd813b701-6dcb-44e6-98dd-9b55e0cb2355',
        'cid' => 1,
        'pid' => 0,
        'form_key' => 'uw_vraag',
        'name' => 'Your question',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => 'contact-your-question',
          'css_classes' => '',
          'cols' => '',
          'rows' => '',
          'resizable' => 1,
          'disabled' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 0,
        'page_num' => 1,
      ),
      8 => array(
        'nid' => 'd813b701-6dcb-44e6-98dd-9b55e0cb2355',
        'cid' => 8,
        'pid' => 0,
        'form_key' => 'meer_informatie',
        'name' => 'More information',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => 'contact-information',
          'css_classes' => '',
          'aslist' => 0,
          'multiple' => 0,
          'custom_keys' => 0,
          'items' => '',
          'empty_option' => '',
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'options_source' => '',
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 1,
        'page_num' => 1,
      ),
      9 => array(
        'nid' => 'd813b701-6dcb-44e6-98dd-9b55e0cb2355',
        'cid' => 9,
        'pid' => 0,
        'form_key' => 'uw_gegevens',
        'name' => 'Your data',
        'type' => 'fieldset',
        'value' => '',
        'extra' => array(
          'private' => 0,
          'css_classes' => 'contact-personal',
          'title_display' => 0,
          'collapsible' => 0,
          'collapsed' => 0,
          'description' => '',
        ),
        'required' => 0,
        'weight' => 2,
        'page_num' => 1,
      ),
      2 => array(
        'nid' => 'd813b701-6dcb-44e6-98dd-9b55e0cb2355',
        'cid' => 2,
        'pid' => 9,
        'form_key' => 'naam',
        'name' => 'Surname',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 3,
        'page_num' => 1,
      ),
      3 => array(
        'nid' => 'd813b701-6dcb-44e6-98dd-9b55e0cb2355',
        'cid' => 3,
        'pid' => 9,
        'form_key' => 'voornaam',
        'name' => 'First name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 4,
        'page_num' => 1,
      ),
      4 => array(
        'nid' => 'd813b701-6dcb-44e6-98dd-9b55e0cb2355',
        'cid' => 4,
        'pid' => 9,
        'form_key' => 'bedrijf',
        'name' => 'Company (if applicable)',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 5,
        'page_num' => 1,
      ),
      5 => array(
        'nid' => 'd813b701-6dcb-44e6-98dd-9b55e0cb2355',
        'cid' => 5,
        'pid' => 9,
        'form_key' => 'email',
        'name' => 'Email',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'unique' => 0,
          'disabled' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
          'multiple' => 0,
          'format' => 'short',
        ),
        'required' => 1,
        'weight' => 6,
        'page_num' => 1,
      ),
      6 => array(
        'nid' => 'd813b701-6dcb-44e6-98dd-9b55e0cb2355',
        'cid' => 6,
        'pid' => 9,
        'form_key' => 'tel',
        'name' => 'Tel.',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 7,
        'page_num' => 1,
      ),
      7 => array(
        'nid' => 'd813b701-6dcb-44e6-98dd-9b55e0cb2355',
        'cid' => 7,
        'pid' => 9,
        'form_key' => 'adres',
        'name' => 'Address',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 8,
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'menu_node_links' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-09-28 17:11:15 +0200',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Waarmee kunnen we u helpen?',
  'log' => '',
  'status' => 0,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '2a45bf4b-be88-4671-8225-afc9149e4c9d',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'nl',
  'created' => 1427877584,
  'tnid' => 0,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'd82e995b-0ba0-4d1c-98fe-6d3ea87c8996',
  'revision_uid' => 1,
  'body' => array(),
  'field_authors' => array(),
  'field_contact' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'field_contact_form' => array(),
  'field_contact_text' => array(),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'nid' => 'd82e995b-0ba0-4d1c-98fe-6d3ea87c8996',
    'next_serial' => 1,
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'confidential' => 0,
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(
      1 => array(
        'nid' => 'd82e995b-0ba0-4d1c-98fe-6d3ea87c8996',
        'cid' => 1,
        'pid' => 0,
        'form_key' => 'uw_vraag',
        'name' => 'Uw vraag',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => 'contact-your-question',
          'css_classes' => '',
          'cols' => '',
          'rows' => '',
          'resizable' => 1,
          'disabled' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 0,
        'page_num' => 1,
      ),
      8 => array(
        'nid' => 'd82e995b-0ba0-4d1c-98fe-6d3ea87c8996',
        'cid' => 8,
        'pid' => 0,
        'form_key' => 'meer_informatie',
        'name' => 'Meer informatie',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => 'contact-information',
          'css_classes' => '',
          'aslist' => 0,
          'multiple' => 0,
          'custom_keys' => 0,
          'items' => '',
          'empty_option' => '',
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'options_source' => '',
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 1,
        'page_num' => 1,
      ),
      9 => array(
        'nid' => 'd82e995b-0ba0-4d1c-98fe-6d3ea87c8996',
        'cid' => 9,
        'pid' => 0,
        'form_key' => 'uw_gegevens',
        'name' => 'Uw gegevens',
        'type' => 'fieldset',
        'value' => '',
        'extra' => array(
          'private' => 0,
          'css_classes' => 'contact-personal',
          'title_display' => 0,
          'collapsible' => 0,
          'collapsed' => 0,
          'description' => '',
        ),
        'required' => 0,
        'weight' => 2,
        'page_num' => 1,
      ),
      2 => array(
        'nid' => 'd82e995b-0ba0-4d1c-98fe-6d3ea87c8996',
        'cid' => 2,
        'pid' => 9,
        'form_key' => 'naam',
        'name' => 'Naam',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 3,
        'page_num' => 1,
      ),
      3 => array(
        'nid' => 'd82e995b-0ba0-4d1c-98fe-6d3ea87c8996',
        'cid' => 3,
        'pid' => 9,
        'form_key' => 'voornaam',
        'name' => 'Voornaam',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 4,
        'page_num' => 1,
      ),
      4 => array(
        'nid' => 'd82e995b-0ba0-4d1c-98fe-6d3ea87c8996',
        'cid' => 4,
        'pid' => 9,
        'form_key' => 'bedrijf',
        'name' => 'Bedrijf (indien toepasbaar)',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 5,
        'page_num' => 1,
      ),
      5 => array(
        'nid' => 'd82e995b-0ba0-4d1c-98fe-6d3ea87c8996',
        'cid' => 5,
        'pid' => 9,
        'form_key' => 'email',
        'name' => 'Email',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'unique' => 0,
          'disabled' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
          'multiple' => 0,
          'format' => 'short',
        ),
        'required' => 1,
        'weight' => 6,
        'page_num' => 1,
      ),
      6 => array(
        'nid' => 'd82e995b-0ba0-4d1c-98fe-6d3ea87c8996',
        'cid' => 6,
        'pid' => 9,
        'form_key' => 'tel',
        'name' => 'Tel.',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 7,
        'page_num' => 1,
      ),
      7 => array(
        'nid' => 'd82e995b-0ba0-4d1c-98fe-6d3ea87c8996',
        'cid' => 7,
        'pid' => 9,
        'form_key' => 'adres',
        'name' => 'Adres',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 8,
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'menu_node_links' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-04-01 10:39:44 +0200',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Werkwijze & visie',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '74dd5971-f3d0-438c-9591-f9db2938060f',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'nl',
  'created' => 1427877363,
  'tnid' => 39,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'db8e7132-75d4-4f88-b1c6-35958dd52fa4',
  'revision_uid' => 23,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Er bestaat onzekerheid over de samenstelling van de bodemlagen of de mogelijke vervuiling van een perceel grond, grondwater en oppervlaktewater. Tegen die achtergrond heeft u als particulier, onderneming, organisatie of overheid behoefte aan een grondmechanisch of een milieutechnisch onderzoek.</p>
<p>Alles begint met het formuleren van een nauwkeurige doelstelling. <strong>Samen met u</strong> bekijken we wat u precies wilt (of moet) te weten komen, welke informatie in die context relevant is en wat er budgettair haalbaar is om tot een bevredigend resultaat te komen.</p>
<p>Op basis van de ambitieuze én haalbare <strong>doelstelling</strong> bepalen we de meest geschikte <strong>strategie</strong>. Elke benadering heeft zijn eigen mogelijkheden, beperkingen en kostprijs. Ook praktische overwegingen spelen een rol.</p>
<p>Wij bekijken de strategie eerst en vooral vanuit onze brede ervaring. Vervolgens toetsen we ze aan de wettelijke richtlijnen en bepalingen.</p>
<p>Dan volgt het <strong>tactische luik</strong>: onze mensen gaan persoonlijk ter plaatse het terrein bekijken om de situatie perfect aan te voelen. Zo behouden we de controle over het volledige proces en kunnen we de strategie verfijnen en indien nodig bijsturen.</p>
<p>Nu kan de <strong>gekozen aanpak</strong> uitgevoerd worden.</p>
<p>Na afloop volgt de <strong>evaluatie</strong> van de bereikte resultaten, waarbij we onze strategie nogmaals in vraag stellen. Indien nodig voeren we bijkomende onderzoeken uit om resultaten te bevestigen of te weerleggen.</p>
<p>&nbsp;</p>
<p>[[{"fid":"25","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"","field_file_image_title_text[und][0][value]":""},"type":"media","link_text":null,"attributes":{"class":"media-element file-default"}}]]</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Er bestaat onzekerheid over de samenstelling van de bodemlagen of de mogelijke vervuiling van een perceel grond, grondwater en oppervlaktewater. Tegen die achtergrond heeft u als particulier, onderneming, organisatie of overheid behoefte aan een grondmechanisch of een milieutechnisch onderzoek.</p>
<p>Alles begint met het formuleren van een nauwkeurige doelstelling. <strong>Samen met u</strong> bekijken we wat u precies wilt (of moet) te weten komen, welke informatie in die context relevant is en wat er budgettair haalbaar is om tot een bevredigend resultaat te komen.</p>
<p>Op basis van de ambitieuze én haalbare <strong>doelstelling</strong> bepalen we de meest geschikte <strong>strategie</strong>. Elke benadering heeft zijn eigen mogelijkheden, beperkingen en kostprijs. Ook praktische overwegingen spelen een rol.</p>
<p>Wij bekijken de strategie eerst en vooral vanuit onze brede ervaring. Vervolgens toetsen we ze aan de wettelijke richtlijnen en bepalingen.</p>
<p>Dan volgt het <strong>tactische luik</strong>: onze mensen gaan persoonlijk ter plaatse het terrein bekijken om de situatie perfect aan te voelen. Zo behouden we de controle over het volledige proces en kunnen we de strategie verfijnen en indien nodig bijsturen.</p>
<p>Nu kan de <strong>gekozen aanpak</strong> uitgevoerd worden.</p>
<p>Na afloop volgt de <strong>evaluatie</strong> van de bereikte resultaten, waarbij we onze strategie nogmaals in vraag stellen. Indien nodig voeren we bijkomende onderzoeken uit om resultaten te bevestigen of te weerleggen.</p>
<p> </p>
<p><img class="media-element file-default" typeof="foaf:Image" src="http://default/sites/default/files/114553-abes-flow-werkwijze.001.png" alt="" /></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_authors' => array(),
  'field_contact' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_contact_form' => array(
    'und' => array(
      0 => array(
        'target_id' => 44,
      ),
    ),
  ),
  'field_contact_text' => array(
    'und' => array(
      0 => array(
        'value' => '<p><em>Meer info?</em></p>
<p>Stuur een <strong>bericht via het contactformulier</strong></p>
<p>of neem persoonlijk contact op via één van onze adressen.</p>
<p>We helpen u graag verder.</p>
',
        'format' => 'full_html',
        'safe_value' => '<p><em>Meer info?</em></p>
<p>Stuur een <strong>bericht via het contactformulier</strong></p>
<p>of neem persoonlijk contact op via één van onze adressen.</p>
<p>We helpen u graag verder.</p>
',
      ),
    ),
  ),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'confidential' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'next_serial' => 1,
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_bar' => 1,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'status' => 1,
    'record_exists' => FALSE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(),
    'conditionals' => array(),
    'nid' => 'db8e7132-75d4-4f88-b1c6-35958dd52fa4',
  ),
  'menu_node_links' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-04-01 10:36:03 +0200',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Access denied',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '238f328e-3383-45c8-88b1-8d2193b7f255',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'en',
  'created' => 1421402509,
  'tnid' => 2,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'e557c6ab-9c9f-471d-b58f-85df096af3a1',
  'revision_uid' => 1,
  'body' => array(),
  'field_authors' => array(),
  'field_contact' => array(),
  'field_contact_form' => array(),
  'field_contact_text' => array(),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'nid' => 'e557c6ab-9c9f-471d-b58f-85df096af3a1',
    'next_serial' => 1,
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'confidential' => 0,
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(),
    'conditionals' => array(),
  ),
  'menu_node_links' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-01-16 11:01:49 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Strona główna',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '17a74ab7-f0e6-4f14-8bb8-2e13aee48901',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'pl',
  'created' => 1427189376,
  'tnid' => 24,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'f2caa064-2969-4399-8757-0189f688d294',
  'revision_uid' => 1,
  'body' => array(),
  'field_authors' => array(),
  'field_contact' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_contact_form' => array(),
  'field_contact_text' => array(),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'confidential' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'next_serial' => 1,
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_bar' => 1,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'status' => 1,
    'record_exists' => FALSE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(),
    'conditionals' => array(),
    'nid' => 'f2caa064-2969-4399-8757-0189f688d294',
  ),
  'menu_node_links' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-03-24 10:29:36 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Template',
  'log' => '',
  'status' => 0,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'dc20c023-1559-45a4-a194-ec093e5a2392',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'nl',
  'created' => 1418906201,
  'tnid' => 0,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'f569a7fd-3152-4e9a-84c3-2b8cd840bf83',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h2>Heading 2</h2>
<h3>Heading 3</h3>
<h4>Heading 4</h4>
<h5>Heading 5</h5>
<h6>Heading 6</h6>
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer tincidunt turpis ac placerat pretium. Morbi non finibus velit, et posuere nulla. Ut ullamcorper, metus convallis malesuada interdum, enim augue pretium metus, ut bibendum purus eros consequat tortor. Aliquam varius aliquet urna, ut laoreet enim rutrum sed.</p>
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer tincidunt turpis ac placerat pretium. Morbi non finibus velit, et posuere nulla. Ut ullamcorper, metus convallis malesuada interdum, enim augue pretium metus, ut bibendum purus eros consequat tortor. Aliquam varius aliquet urna, ut laoreet enim rutrum sed.</p>
<hr>
<p>Ut lacinia convallis ultrices. Duis <strong>placerat eget lacus</strong> eget bibendum. Proin <em>facilisis</em> lorem non lectus scelerisque, vel ullamcorper dolor porttitor. Proin eget sem tincidunt, sagittis lectus sed, gravida est. Curabitur tempus elit dui, sed laoreet leo elementum eget. Phasellus quis semper neque. Phasellus posuere orci ac ullamcorper blandit. Aenean viverra ac nisi non laoreet.</p>
<h2>Heading 2</h2>
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer tincidunt turpis ac placerat pretium. Morbi non finibus velit, et posuere nulla. Ut ullamcorper, metus convallis malesuada interdum, enim augue pretium metus, ut bibendum purus eros consequat tortor. Aliquam varius aliquet urna, ut laoreet enim rutrum sed.</p>
<h3>Heading 3</h3>
<p>Ut lacinia convallis ultrices. Duis <strong>placerat eget lacus</strong> eget bibendum. Proin <em>facilisis</em> lorem non lectus scelerisque, vel ullamcorper dolor porttitor. Proin eget sem tincidunt, sagittis lectus sed, gravida est. Curabitur tempus elit dui, sed laoreet leo elementum eget. Phasellus quis semper neque. Phasellus posuere orci ac ullamcorper blandit. Aenean viverra ac nisi non laoreet.</p>
<h4>Heading 4</h4>
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer tincidunt turpis ac placerat pretium. Morbi non finibus velit, et posuere nulla. Ut ullamcorper, metus convallis malesuada interdum, enim augue pretium metus, ut bibendum purus eros consequat tortor. Aliquam varius aliquet urna, ut laoreet enim rutrum sed.</p>
<p>Ut lacinia convallis ultrices. Duis <strong>placerat eget lacus</strong> eget bibendum. Proin <em>facilisis</em> lorem non lectus scelerisque, vel ullamcorper dolor porttitor. Proin eget sem tincidunt, sagittis lectus sed, gravida est. Curabitur tempus elit dui, sed laoreet leo elementum eget. Phasellus quis semper neque. Phasellus posuere orci ac ullamcorper blandit. Aenean viverra ac nisi non laoreet.</p>
<h5>Heading 5</h5>
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer tincidunt turpis ac placerat pretium. Morbi non finibus velit, et posuere nulla. Ut ullamcorper, metus convallis malesuada interdum, enim augue pretium metus, ut bibendum purus eros consequat tortor. Aliquam varius aliquet urna, ut laoreet enim rutrum sed.</p>
<p>Ut lacinia convallis ultrices. Duis <strong>placerat eget lacus</strong> eget bibendum. Proin <em>facilisis</em> lorem non lectus scelerisque, vel ullamcorper dolor porttitor. Proin eget sem tincidunt, sagittis lectus sed, gravida est. Curabitur tempus elit dui, sed laoreet leo elementum eget. Phasellus quis semper neque. Phasellus posuere orci ac ullamcorper blandit. Aenean viverra ac nisi non laoreet.</p>
<h6>Heading 6</h6>
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer tincidunt turpis ac placerat pretium. Morbi non finibus velit, et posuere nulla. Ut ullamcorper, metus convallis malesuada interdum, enim augue pretium metus, ut bibendum purus eros consequat tortor. Aliquam varius aliquet urna, ut laoreet enim rutrum sed.</p>
<ul>
	<li>Mauris sed egestas velit</li>
	<li>quis fringilla neque</li>
	<li>Fusce ut efficitur nulla</li>
</ul>
<p>Aliquam hendrerit libero et elit pharetra, pellentesque pulvinar mi iaculis. Vestibulum gravida nisl vitae cursus consectetur. Vivamus tempus congue enim, quis congue quam malesuada vitae.</p>
<h2 class="divider">Maecenas dictum nisl eu ipsum fermentum, non gravida libero condimentum. Praesent molestie dui nisi, quis sollicitudin arcu consequat nec.</h2>
<p><a class="button" href="/node/10">Quisque sed suscipit mi</a></p>
<p>Morbi et mattis augue, vel finibus elit. Nulla eleifend tempus ullamcorper. Aenean posuere augue lectus, sit amet cursus ante sodales ut. Sed in nulla dolor. Quisque eget sem risus. Sed semper a lectus id pellentesque. Etiam elementum augue vitae maximus aliquam. Cras ut dolor eu ipsum lobortis suscipit vitae eu ex. Pellentesque nec risus nec tellus cursus dignissim eu eu risus. Integer porta, lacus id aliquet rhoncus, diam tellus auctor eros, vitae vehicula quam purus at mauris. Proin sem odio, pharetra nec velit a, <a class="more" href="/node/185">facilisis dictum dolor</a>.</p>
<p class="highlight"><strong>Paragraaf highlight</strong> hasellus eu urna convallis arcu tristique rhoncus at nec neque. Nunc et posuere justo. Fusce consequat, quam eleifend ullamcorper mattis, felis felis iaculis tortor, vitae placerat odio arcu quis dui. Maecenas fringilla lectus non <span class="intro">nulla</span> feugiat laoreet. Curabitur pulvinar neque arcu, at sodales magna blandit a. Nunc gravida sodales risus eu scelerisque. Integer gravida dui nec urna gravida luctus. Nulla ut luctus magna, ac fringilla nulla. Sed ornare interdum ligula, et blandit arcu tincidunt vel.</p>
<h2>Blockquotes</h2>
<blockquote>
	<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer tincidunt turpis ac placerat pretium. Morbi non finibus velit, et posuere nulla. Ut ullamcorper, metus convallis malesuada interdum, enim augue pretium metus, ut bibendum purus eros consequat tortor. Aliquam varius aliquet urna, ut laoreet enim rutrum sed.</p>
</blockquote>
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer tincidunt turpis ac placerat pretium. Morbi non finibus velit, et posuere nulla. Ut ullamcorper, metus convallis malesuada interdum, enim augue pretium metus, ut bibendum purus eros consequat tortor. Aliquam varius aliquet urna, ut laoreet enim rutrum sed.</p>
<p>Aenean consequat neque et sapien volutpat finibus. Fusce mattis feugiat nisi ut volutpat. Vestibulum auctor justo a dui scelerisque tempus. Nulla fringilla commodo tortor, sit amet blandit tellus convallis quis. Duis sit amet purus quis urna iaculis interdum. Mauris feugiat urna quis vulputate scelerisque. Morbi mi leo, pharetra quis ligula sed, lacinia imperdiet magna.</p>
<h2>Imagery</h2>
<h3>one column</h3>
<p>&nbsp;</p>
<h3>two columns</h3>
<p>&nbsp;</p>
<h3>three columns</h3>
<p>&nbsp;</p>
<p>Ut dictum augue eu tellus gravida, nec semper turpis placerat. Cras augue orci, tincidunt tincidunt eleifend in, auctor sed justo. Nam porta nunc quis est cursus, in scelerisque eros vehicula. Integer nulla nisi, tempus vitae arcu ut, laoreet aliquet diam. Mauris vel magna dignissim, pellentesque massa eu, dignissim orci. In tempus orci vel neque ullamcorper volutpat. Phasellus molestie convallis auctor. Aliquam risus velit, elementum sed viverra sit amet, rhoncus ac est. Praesent elementum nisi id lobortis faucibus. Nulla gravida lacinia augue pulvinar tempor. Vivamus elementum nibh ut elementum maximus. In id sapien sed nulla efficitur condimentum at id tellus. Phasellus hendrerit arcu purus, vel malesuada purus maximus ut. Nulla facilisi. Ut pellentesque erat felis, sit amet ultricies elit ullamcorper vel.</p>
<h2>image pull left</h2>
<p class="pull-left"><span style="line-height: 1.538em;">Ut dictum augue eu tellus gravida, nec semper turpis placerat. Cras augue orci, tincidunt tincidunt eleifend in, auctor sed justo. Nam porta nunc quis est cursus, in scelerisque eros vehicula. Integer nulla nisi, tempus vitae arcu ut, laoreet aliquet diam. Mauris vel magna dignissim, pellentesque massa eu, dignissim orci. In tempus orci vel neque ullamcorper volutpat. Phasellus molestie convallis auctor. Aliquam risus velit, elementum sed viverra sit amet, rhoncus ac est. Praesent elementum nisi id lobortis faucibus. Nulla gravida lacinia augue pulvinar tempor. Vivamus elementum nibh ut elementum maximus. In id sapien sed nulla efficitur condimentum at id tellus. Phasellus hendrerit arcu purus, vel malesuada purus maximus ut. Nulla facilisi. Ut pellentesque erat felis, sit amet ultricies elit ullamcorper vel.</span></p>
<h2>image pull right</h2>
<p class="pull-right"><span style="line-height: 1.538em;">Ut dictum augue eu tellus gravida, nec semper turpis placerat. Cras augue orci, tincidunt tincidunt eleifend in, auctor sed justo. Nam porta nunc quis est cursus, in scelerisque eros vehicula. Integer nulla nisi, tempus vitae arcu ut, laoreet aliquet diam. Mauris vel magna dignissim, pellentesque massa eu, dignissim orci. In tempus orci vel neque ullamcorper volutpat. Phasellus molestie convallis auctor. Aliquam risus velit, elementum sed viverra sit amet, rhoncus ac est. Praesent elementum nisi id lobortis faucibus. Nulla gravida lacinia augue pulvinar tempor. Vivamus elementum nibh ut elementum maximus. In id sapien sed nulla efficitur condimentum at id tellus. Phasellus hendrerit arcu purus, vel malesuada purus maximus ut. Nulla facilisi. Ut pellentesque erat felis, sit amet ultricies elit ullamcorper vel.</span></p>
<p>Ut dictum augue eu tellus gravida, nec semper turpis placerat. Cras augue orci, tincidunt tincidunt eleifend in, auctor sed justo. Nam porta nunc quis est cursus, in scelerisque eros vehicula. Integer nulla nisi, tempus vitae arcu ut, laoreet aliquet diam. Mauris vel magna dignissim, pellentesque massa eu, dignissim orci. In tempus orci vel neque ullamcorper volutpat. Phasellus molestie convallis auctor. Aliquam risus velit, elementum sed viverra sit amet, rhoncus ac est. Praesent elementum nisi id lobortis faucibus. Nulla gravida lacinia augue pulvinar tempor. Vivamus elementum nibh ut elementum maximus. In id sapien sed nulla efficitur condimentum at id tellus. Phasellus hendrerit arcu purus, vel malesuada purus maximus ut. Nulla facilisi. Ut pellentesque erat felis, sit amet ultricies elit ullamcorper vel.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<h2>Heading 2</h2>
<h3>Heading 3</h3>
<h4>Heading 4</h4>
<h5>Heading 5</h5>
<h6>Heading 6</h6>
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer tincidunt turpis ac placerat pretium. Morbi non finibus velit, et posuere nulla. Ut ullamcorper, metus convallis malesuada interdum, enim augue pretium metus, ut bibendum purus eros consequat tortor. Aliquam varius aliquet urna, ut laoreet enim rutrum sed.</p>
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer tincidunt turpis ac placerat pretium. Morbi non finibus velit, et posuere nulla. Ut ullamcorper, metus convallis malesuada interdum, enim augue pretium metus, ut bibendum purus eros consequat tortor. Aliquam varius aliquet urna, ut laoreet enim rutrum sed.</p>
<hr /><p>Ut lacinia convallis ultrices. Duis <strong>placerat eget lacus</strong> eget bibendum. Proin <em>facilisis</em> lorem non lectus scelerisque, vel ullamcorper dolor porttitor. Proin eget sem tincidunt, sagittis lectus sed, gravida est. Curabitur tempus elit dui, sed laoreet leo elementum eget. Phasellus quis semper neque. Phasellus posuere orci ac ullamcorper blandit. Aenean viverra ac nisi non laoreet.</p>
<h2>Heading 2</h2>
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer tincidunt turpis ac placerat pretium. Morbi non finibus velit, et posuere nulla. Ut ullamcorper, metus convallis malesuada interdum, enim augue pretium metus, ut bibendum purus eros consequat tortor. Aliquam varius aliquet urna, ut laoreet enim rutrum sed.</p>
<h3>Heading 3</h3>
<p>Ut lacinia convallis ultrices. Duis <strong>placerat eget lacus</strong> eget bibendum. Proin <em>facilisis</em> lorem non lectus scelerisque, vel ullamcorper dolor porttitor. Proin eget sem tincidunt, sagittis lectus sed, gravida est. Curabitur tempus elit dui, sed laoreet leo elementum eget. Phasellus quis semper neque. Phasellus posuere orci ac ullamcorper blandit. Aenean viverra ac nisi non laoreet.</p>
<h4>Heading 4</h4>
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer tincidunt turpis ac placerat pretium. Morbi non finibus velit, et posuere nulla. Ut ullamcorper, metus convallis malesuada interdum, enim augue pretium metus, ut bibendum purus eros consequat tortor. Aliquam varius aliquet urna, ut laoreet enim rutrum sed.</p>
<p>Ut lacinia convallis ultrices. Duis <strong>placerat eget lacus</strong> eget bibendum. Proin <em>facilisis</em> lorem non lectus scelerisque, vel ullamcorper dolor porttitor. Proin eget sem tincidunt, sagittis lectus sed, gravida est. Curabitur tempus elit dui, sed laoreet leo elementum eget. Phasellus quis semper neque. Phasellus posuere orci ac ullamcorper blandit. Aenean viverra ac nisi non laoreet.</p>
<h5>Heading 5</h5>
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer tincidunt turpis ac placerat pretium. Morbi non finibus velit, et posuere nulla. Ut ullamcorper, metus convallis malesuada interdum, enim augue pretium metus, ut bibendum purus eros consequat tortor. Aliquam varius aliquet urna, ut laoreet enim rutrum sed.</p>
<p>Ut lacinia convallis ultrices. Duis <strong>placerat eget lacus</strong> eget bibendum. Proin <em>facilisis</em> lorem non lectus scelerisque, vel ullamcorper dolor porttitor. Proin eget sem tincidunt, sagittis lectus sed, gravida est. Curabitur tempus elit dui, sed laoreet leo elementum eget. Phasellus quis semper neque. Phasellus posuere orci ac ullamcorper blandit. Aenean viverra ac nisi non laoreet.</p>
<h6>Heading 6</h6>
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer tincidunt turpis ac placerat pretium. Morbi non finibus velit, et posuere nulla. Ut ullamcorper, metus convallis malesuada interdum, enim augue pretium metus, ut bibendum purus eros consequat tortor. Aliquam varius aliquet urna, ut laoreet enim rutrum sed.</p>
<ul><li>Mauris sed egestas velit</li>
<li>quis fringilla neque</li>
<li>Fusce ut efficitur nulla</li>
</ul><p>Aliquam hendrerit libero et elit pharetra, pellentesque pulvinar mi iaculis. Vestibulum gravida nisl vitae cursus consectetur. Vivamus tempus congue enim, quis congue quam malesuada vitae.</p>
<h2 class="divider">Maecenas dictum nisl eu ipsum fermentum, non gravida libero condimentum. Praesent molestie dui nisi, quis sollicitudin arcu consequat nec.</h2>
<p><a class="button" href="/node/10">Quisque sed suscipit mi</a></p>
<p>Morbi et mattis augue, vel finibus elit. Nulla eleifend tempus ullamcorper. Aenean posuere augue lectus, sit amet cursus ante sodales ut. Sed in nulla dolor. Quisque eget sem risus. Sed semper a lectus id pellentesque. Etiam elementum augue vitae maximus aliquam. Cras ut dolor eu ipsum lobortis suscipit vitae eu ex. Pellentesque nec risus nec tellus cursus dignissim eu eu risus. Integer porta, lacus id aliquet rhoncus, diam tellus auctor eros, vitae vehicula quam purus at mauris. Proin sem odio, pharetra nec velit a, <a class="more" href="/node/185">facilisis dictum dolor</a>.</p>
<p class="highlight"><strong>Paragraaf highlight</strong> hasellus eu urna convallis arcu tristique rhoncus at nec neque. Nunc et posuere justo. Fusce consequat, quam eleifend ullamcorper mattis, felis felis iaculis tortor, vitae placerat odio arcu quis dui. Maecenas fringilla lectus non <span class="intro">nulla</span> feugiat laoreet. Curabitur pulvinar neque arcu, at sodales magna blandit a. Nunc gravida sodales risus eu scelerisque. Integer gravida dui nec urna gravida luctus. Nulla ut luctus magna, ac fringilla nulla. Sed ornare interdum ligula, et blandit arcu tincidunt vel.</p>
<h2>Blockquotes</h2>
<blockquote><p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer tincidunt turpis ac placerat pretium. Morbi non finibus velit, et posuere nulla. Ut ullamcorper, metus convallis malesuada interdum, enim augue pretium metus, ut bibendum purus eros consequat tortor. Aliquam varius aliquet urna, ut laoreet enim rutrum sed.</p>
</blockquote>
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer tincidunt turpis ac placerat pretium. Morbi non finibus velit, et posuere nulla. Ut ullamcorper, metus convallis malesuada interdum, enim augue pretium metus, ut bibendum purus eros consequat tortor. Aliquam varius aliquet urna, ut laoreet enim rutrum sed.</p>
<p>Aenean consequat neque et sapien volutpat finibus. Fusce mattis feugiat nisi ut volutpat. Vestibulum auctor justo a dui scelerisque tempus. Nulla fringilla commodo tortor, sit amet blandit tellus convallis quis. Duis sit amet purus quis urna iaculis interdum. Mauris feugiat urna quis vulputate scelerisque. Morbi mi leo, pharetra quis ligula sed, lacinia imperdiet magna.</p>
<h2>Imagery</h2>
<h3>one column</h3>
<p> </p>
<h3>two columns</h3>
<p> </p>
<h3>three columns</h3>
<p> </p>
<p>Ut dictum augue eu tellus gravida, nec semper turpis placerat. Cras augue orci, tincidunt tincidunt eleifend in, auctor sed justo. Nam porta nunc quis est cursus, in scelerisque eros vehicula. Integer nulla nisi, tempus vitae arcu ut, laoreet aliquet diam. Mauris vel magna dignissim, pellentesque massa eu, dignissim orci. In tempus orci vel neque ullamcorper volutpat. Phasellus molestie convallis auctor. Aliquam risus velit, elementum sed viverra sit amet, rhoncus ac est. Praesent elementum nisi id lobortis faucibus. Nulla gravida lacinia augue pulvinar tempor. Vivamus elementum nibh ut elementum maximus. In id sapien sed nulla efficitur condimentum at id tellus. Phasellus hendrerit arcu purus, vel malesuada purus maximus ut. Nulla facilisi. Ut pellentesque erat felis, sit amet ultricies elit ullamcorper vel.</p>
<h2>image pull left</h2>
<p class="pull-left"><span style="line-height: 1.538em;">Ut dictum augue eu tellus gravida, nec semper turpis placerat. Cras augue orci, tincidunt tincidunt eleifend in, auctor sed justo. Nam porta nunc quis est cursus, in scelerisque eros vehicula. Integer nulla nisi, tempus vitae arcu ut, laoreet aliquet diam. Mauris vel magna dignissim, pellentesque massa eu, dignissim orci. In tempus orci vel neque ullamcorper volutpat. Phasellus molestie convallis auctor. Aliquam risus velit, elementum sed viverra sit amet, rhoncus ac est. Praesent elementum nisi id lobortis faucibus. Nulla gravida lacinia augue pulvinar tempor. Vivamus elementum nibh ut elementum maximus. In id sapien sed nulla efficitur condimentum at id tellus. Phasellus hendrerit arcu purus, vel malesuada purus maximus ut. Nulla facilisi. Ut pellentesque erat felis, sit amet ultricies elit ullamcorper vel.</span></p>
<h2>image pull right</h2>
<p class="pull-right"><span style="line-height: 1.538em;">Ut dictum augue eu tellus gravida, nec semper turpis placerat. Cras augue orci, tincidunt tincidunt eleifend in, auctor sed justo. Nam porta nunc quis est cursus, in scelerisque eros vehicula. Integer nulla nisi, tempus vitae arcu ut, laoreet aliquet diam. Mauris vel magna dignissim, pellentesque massa eu, dignissim orci. In tempus orci vel neque ullamcorper volutpat. Phasellus molestie convallis auctor. Aliquam risus velit, elementum sed viverra sit amet, rhoncus ac est. Praesent elementum nisi id lobortis faucibus. Nulla gravida lacinia augue pulvinar tempor. Vivamus elementum nibh ut elementum maximus. In id sapien sed nulla efficitur condimentum at id tellus. Phasellus hendrerit arcu purus, vel malesuada purus maximus ut. Nulla facilisi. Ut pellentesque erat felis, sit amet ultricies elit ullamcorper vel.</span></p>
<p>Ut dictum augue eu tellus gravida, nec semper turpis placerat. Cras augue orci, tincidunt tincidunt eleifend in, auctor sed justo. Nam porta nunc quis est cursus, in scelerisque eros vehicula. Integer nulla nisi, tempus vitae arcu ut, laoreet aliquet diam. Mauris vel magna dignissim, pellentesque massa eu, dignissim orci. In tempus orci vel neque ullamcorper volutpat. Phasellus molestie convallis auctor. Aliquam risus velit, elementum sed viverra sit amet, rhoncus ac est. Praesent elementum nisi id lobortis faucibus. Nulla gravida lacinia augue pulvinar tempor. Vivamus elementum nibh ut elementum maximus. In id sapien sed nulla efficitur condimentum at id tellus. Phasellus hendrerit arcu purus, vel malesuada purus maximus ut. Nulla facilisi. Ut pellentesque erat felis, sit amet ultricies elit ullamcorper vel.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_authors' => array(),
  'field_contact' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'field_contact_form' => array(),
  'field_contact_text' => array(),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'confidential' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'next_serial' => 1,
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_bar' => 1,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'status' => 1,
    'record_exists' => FALSE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(),
    'conditionals' => array(),
    'nid' => 'f569a7fd-3152-4e9a-84c3-2b8cd840bf83',
  ),
  'menu_node_links' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-12-18 13:36:41 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Contact',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'bb870027-3f62-40ec-a67e-03bfcc3c1ac4',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'nl',
  'created' => 1418903549,
  'tnid' => 6,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'fd4d7e00-d1ba-4740-9674-b2b3116ab8cb',
  'revision_uid' => 23,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h4>Waarmee kunnen we u helpen?</h4>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<h4>Waarmee kunnen we u helpen?</h4>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_authors' => array(
    'und' => array(
      0 => array(
        'target_id' => 111,
      ),
      1 => array(
        'target_id' => 110,
      ),
      2 => array(
        'target_id' => 109,
      ),
      3 => array(
        'target_id' => 108,
      ),
      4 => array(
        'target_id' => 107,
      ),
      5 => array(
        'target_id' => 106,
      ),
      6 => array(
        'target_id' => 103,
      ),
      7 => array(
        'target_id' => 105,
      ),
      8 => array(
        'target_id' => 104,
      ),
      9 => array(
        'target_id' => 102,
      ),
      10 => array(
        'target_id' => 101,
      ),
      11 => array(
        'target_id' => 100,
      ),
      12 => array(
        'target_id' => 99,
      ),
      13 => array(
        'target_id' => 98,
      ),
      14 => array(
        'target_id' => 97,
      ),
      15 => array(
        'target_id' => 96,
      ),
      16 => array(
        'target_id' => 94,
      ),
      17 => array(
        'target_id' => 95,
      ),
      18 => array(
        'target_id' => 56,
      ),
      19 => array(
        'target_id' => 84,
      ),
      20 => array(
        'target_id' => 85,
      ),
    ),
  ),
  'field_contact' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'field_contact_form' => array(),
  'field_contact_text' => array(),
  'field_header' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'nid' => 'fd4d7e00-d1ba-4740-9674-b2b3116ab8cb',
    'next_serial' => 9,
    'confirmation' => '<p>Bedankt voor uw contact aanvraag. Wij nemen zo snel mogelijk contact met u op!</p>
',
    'confirmation_format' => 'full_html',
    'redirect_url' => 'node/87',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => 'Verzenden',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => 'full_html',
    'preview_excluded_components' => array(),
    'confidential' => 0,
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(
      3 => array(
        'nid' => 44,
        'eid' => 3,
        'email' => 10,
        'subject' => 'default',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => 'default',
        'excluded_components' => array(),
        'html' => 0,
        'attachments' => 0,
        'extra' => array(
          'email_mapping' => array(
            1 => 'info@abesim.com',
            2 => 'info@abesim.com',
            3 => 'info@abesim.com',
            4 => 'info@abesim.com',
            5 => 'info@abesim.com',
            6 => 'info@abesim.com',
            7 => 'info@abesim.com',
            8 => 'info@abesim.com',
          ),
        ),
        'exclude_empty' => 0,
      ),
    ),
    'components' => array(
      2 => array(
        'nid' => 'fd4d7e00-d1ba-4740-9674-b2b3116ab8cb',
        'cid' => 2,
        'pid' => 0,
        'form_key' => 'message',
        'name' => 'Uw vraag',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'cols' => '',
          'rows' => '',
          'resizable' => 1,
          'disabled' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 1,
        'page_num' => 1,
      ),
      9 => array(
        'nid' => 'fd4d7e00-d1ba-4740-9674-b2b3116ab8cb',
        'cid' => 9,
        'pid' => 0,
        'form_key' => 'meer_informatie',
        'name' => 'Meer informatie',
        'type' => 'fieldset',
        'value' => '',
        'extra' => array(
          'private' => 0,
          'css_classes' => '',
          'title_display' => 0,
          'collapsible' => 0,
          'collapsed' => 0,
          'description' => '',
        ),
        'required' => 0,
        'weight' => 2,
        'page_num' => 1,
      ),
      10 => array(
        'nid' => 'fd4d7e00-d1ba-4740-9674-b2b3116ab8cb',
        'cid' => 10,
        'pid' => 9,
        'form_key' => 'meer_informatie_opties',
        'name' => 'Meer informatie opties',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'title_display' => 'none',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'aslist' => 0,
          'items' => '1|Milieu diagnostiek
2|Bouwtechniek
3|Geotechniek
4|Milieu management
5|Expertise
6|Andere
7|Ik heb een klacht
8|Ik wens feedback over een lopend dossier
',
          'multiple' => 1,
          'custom_keys' => 0,
          'empty_option' => '',
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'options_source' => '',
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 3,
        'page_num' => 1,
      ),
      8 => array(
        'nid' => 'fd4d7e00-d1ba-4740-9674-b2b3116ab8cb',
        'cid' => 8,
        'pid' => 0,
        'form_key' => 'uw_gegevens',
        'name' => 'Uw gegevens',
        'type' => 'fieldset',
        'value' => '',
        'extra' => array(
          'private' => 0,
          'css_classes' => '',
          'title_display' => 0,
          'collapsible' => 0,
          'collapsed' => 0,
          'description' => '',
        ),
        'required' => 0,
        'weight' => 3,
        'page_num' => 1,
      ),
      3 => array(
        'nid' => 'fd4d7e00-d1ba-4740-9674-b2b3116ab8cb',
        'cid' => 3,
        'pid' => 8,
        'form_key' => 'naam',
        'name' => 'Naam',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 6,
        'page_num' => 1,
      ),
      4 => array(
        'nid' => 'fd4d7e00-d1ba-4740-9674-b2b3116ab8cb',
        'cid' => 4,
        'pid' => 8,
        'form_key' => 'voornaam',
        'name' => 'Voornaam',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 7,
        'page_num' => 1,
      ),
      5 => array(
        'nid' => 'fd4d7e00-d1ba-4740-9674-b2b3116ab8cb',
        'cid' => 5,
        'pid' => 8,
        'form_key' => 'bedrijf',
        'name' => 'Bedrijf (indien toepasbaar)',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 8,
        'page_num' => 1,
      ),
      1 => array(
        'nid' => 'fd4d7e00-d1ba-4740-9674-b2b3116ab8cb',
        'cid' => 1,
        'pid' => 8,
        'form_key' => 'e_mail',
        'name' => 'E-mail',
        'type' => 'email',
        'value' => '[current-user:mail]',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'unique' => 0,
          'disabled' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
          'multiple' => 0,
          'format' => 'short',
        ),
        'required' => 1,
        'weight' => 9,
        'page_num' => 1,
      ),
      6 => array(
        'nid' => 'fd4d7e00-d1ba-4740-9674-b2b3116ab8cb',
        'cid' => 6,
        'pid' => 8,
        'form_key' => 'telefoonnummer',
        'name' => 'Telefoonnummer',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 10,
        'page_num' => 1,
      ),
      7 => array(
        'nid' => 'fd4d7e00-d1ba-4740-9674-b2b3116ab8cb',
        'cid' => 7,
        'pid' => 8,
        'form_key' => 'straat_huisnummer',
        'name' => 'Straat en huisnummer',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 11,
        'page_num' => 1,
      ),
      11 => array(
        'nid' => 'fd4d7e00-d1ba-4740-9674-b2b3116ab8cb',
        'cid' => 11,
        'pid' => 8,
        'form_key' => 'postcode_woonplaats',
        'name' => 'Postcode en woonplaats',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 12,
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'menu_node_links' => array(
    476 => array(
      'menu_name' => 'main-menu',
      'mlid' => 476,
      'plid' => 0,
      'link_path' => 'node/44',
      'router_path' => 'node/%',
      'link_title' => 'Contact',
      'options' => 'a:2:{s:9:"node_type";s:4:"page";s:5:"alter";b:1;}',
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => -45,
      'depth' => 1,
      'customized' => 1,
      'p1' => 476,
      'p2' => 0,
      'p3' => 0,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'uuid' => '8a77875b-b632-40a5-986d-7ff0c070cd2a',
      'language' => 'nl',
      'i18n_tsid' => 0,
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-12-18 12:52:29 +0100',
);
  return $nodes;
}
